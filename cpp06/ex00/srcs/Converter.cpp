/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:08:34 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/11 18:56:21 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <iomanip>

Converter::Converter(std::string literal)
	: type(INIT), literal(literal), infNanFlag(false), dotFlag(0), fFlag(0)
{
	f[0] = &Converter::convertChar;
	f[1] = &Converter::convertInt;
	f[2] = &Converter::convertFloat;
	f[3] = &Converter::convertDouble;
}

Converter::Converter(const Converter &other)
{
	*this = other;
}

Converter &Converter::operator=(const Converter &rhs)
{
	type = rhs.type;
	literal = rhs.literal;
	infNanFlag = rhs.infNanFlag;
	dotFlag = rhs.dotFlag;
	fFlag = rhs.fFlag;
	for (int i = 0; i < 4; i++)
		f[i] = rhs.f[i];
	return (*this);
}

Converter::~Converter()
{

}

void	Converter::detect()
{
	if (detectChar())
		type = CHAR;
	else if (detectInfNan())
		infNanFlag = true;
	else if (!checkFlags())
		throw (InvalidInputException());
	else
		detectNumType();
}

bool	Converter::detectChar()
{
	if ((literal.size() == 1 && !std::isdigit(literal[0]) && literal[0] >= 32 && literal[0] <= 126))
	{
		_c = literal[0];
		return true;
	}
	else if (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\''
				&& !std::isdigit(literal[1] && literal[1] >= 32 && literal[1] <= 126))
	{
		_c = literal[1];
		return true;
	}
	return false;
}

bool	Converter::detectInfNan()
{
	if (literal == "nanf" || literal == "inff" || literal == "+inff" || literal == "-inff")
	{
		type = FLOAT;
		literal = literal.replace(literal.size() - 1, 1, "");
	}
	else if (literal == "nan" || literal == "inf" || literal == "+inf" || literal == "-inf")
		type = DOUBLE;
	else
		return false;
	infNanFlag = true;
	return true;
}

bool	Converter::checkFlags()
{
	size_t	i = 0;

	if (literal[0] == '+' || literal[0] == '-')
		i++;
	for (; i < literal.size(); i++)
	{
		if (literal[i] == '.')
			dotFlag += 1;
		else if (literal[i] == 'f')
			fFlag += 1;
		else if (std::isdigit(literal[i]))
			continue ;
		else
			return false;
	}
	return true;
}

void	Converter::detectNumType()
{
	size_t	fIdx = literal.find('f');

	if (fFlag == 1 && dotFlag == 1 && fIdx == literal.size() - 1)
	{
		type = FLOAT;
		_f = stof(literal);
	}
	else if (fFlag == 0 && dotFlag == 1)
	{
		type = DOUBLE;
		_d = stod(literal);
	}
	else if (fFlag == 0 && dotFlag == 0)
	{
		type = INT;
		_i = stoi(literal);
	}
	else
		throw (InvalidInputException());
}

void	Converter::convert()
{
	std::cout << std::fixed << std::setprecision(1);
	if (infNanFlag)
	{
		convertInfNan();
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (i == type)
			(this->*f[i])();
	}
}

void	Converter::convertInfNan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << literal << "f" << std::endl;
	std::cout << "double: " << literal << std::endl;
}

void	Converter::convertChar()
{
	std::cout << "char: '" << _c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(_c) << std::endl;
	std::cout << "float: " << static_cast<float>(_c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_c) << std::endl;
}

void	Converter::convertInt()
{
	std::cout << "char: ";
	if (!(-128 <=_i && _i <= 127))
		std::cout << "impossible" << std::endl;
	else if (!(32 <= _i && _i <= 126))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(_i) << "'" << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: " << static_cast<float>(_i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_i) << std::endl;
}

void	Converter::convertFloat()
{
	std::cout << "char: ";
	if (!(-128 <= _f && _f <= 127))
		std::cout << "impossible" << std::endl;
	else if (!(32 <= _i && _i <= 126))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(_f) << "'" << std::endl;
	std::cout << "int: ";
	if (_f > INT_MAX || _f < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(_f) << std::endl;
	std::cout << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_f) << std::endl;
}

void	Converter::convertDouble()
{
	//char
	std::cout << "char: ";
	if (_d < -128 || _d > 127)
		std::cout << "impossible" << std::endl;
	else if (_d < 32 || _d > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "\'" << static_cast<char>(_d) << "\'" << std::endl;
	//other
	std::cout << "int: ";
	if (_d > INT_MAX || _d < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(_d) << std::endl;
	std::cout << "float: ";
	std::cout << static_cast<float>(_d) << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
}

const char *Converter::InvalidInputException::what() const throw()
{
	return ("invalid argument.");
}

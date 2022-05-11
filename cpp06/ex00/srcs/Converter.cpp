/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:08:34 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/11 17:49:23 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <iomanip>

Converter::Converter(std::string literal)
	: literal(literal)
{

}

Converter::Converter(const Converter &other)
{
	*this = other;
}

Converter &Converter::operator=(const Converter &rhs)
{
	literal = rhs.literal;
	character = rhs.character;
	isNum = rhs.isNum;
	infNanFlag = rhs.infNanFlag;
	return (*this);
}

Converter::~Converter()
{

}

void	Converter::convert()
{
	if (detectChar())
		printChar();
	else if (detectInfNan())
		printInfNan();
	else if (!checkFlags())
		throw (InvalidInputException());
	else
	{
		std::cout << std::fixed << std::setprecision(1);
		printNum();
	}
}

bool	Converter::detectChar()
{
	if ((literal.size() == 1 && !std::isdigit(literal[0]) && literal[0] >= 32 && literal[0] <= 126))
	{
		character = literal[0];
		isNum = false;
		return true;
	}
	else if (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\''
				&& !std::isdigit(literal[1] && literal[1] >= 32 && literal[1] <= 126))
	{
		character = literal[1];
		isNum = false;
		return true;
	}
	isNum = true;
	return false;
}

bool	Converter::detectInfNan()
{
	if (literal == "nanf" || literal == "inff" || literal == "+inff" || literal == "-inff"\
	 || literal == "nan" || literal == "inf" || literal == "+inf" || literal == "-inf")
		return true;
	else
		return false;
	infNanFlag = 1;
}

bool	Converter::checkFlags()
{
	size_t	i = 0;

	int _dotFlag(0), _fFlag(0);

	if (literal[0] == '+' || literal[0] == '-')
		i++;
	for (; i < literal.size(); i++)
	{
		if (literal[i] == '.')
			_dotFlag += 1;
		else if (literal[i] == 'f')
			_fFlag += 1;
		else if (std::isdigit(literal[i]))
			continue ;
		else
			return false;
	}
	return true;
}

void	Converter::printChar()
{
	std::cout << "char: '" << character << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(character)  << std::endl;
	std::cout << "float: " << static_cast<float>(character) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(character) << std::endl;
}

void	Converter::printInfNan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << literal << "f" << std::endl;
	std::cout << "double: " << literal << std::endl;
}

void	Converter::printNum()
{
	int temp = stod(literal);

	if (!(-128 <= temp && temp <= 127))
		std::cout << "char : impossible" << std::endl;
	else if (!(32 <= temp && temp <= 126))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(temp) << "'" << std::endl;
	std::cout << "int: " << stoi(literal) << std::endl;
	std::cout << "float: " << stof(literal) << "f " << std::endl;
	std::cout << "double: " << stod(literal) << " " << std::endl;
}

const char *Converter::InvalidInputException::what() const throw()
{
	return ("invalid argument.");
}

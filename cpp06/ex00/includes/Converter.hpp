/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:07:30 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/11 18:42:04 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>

class Converter
{
private :
	enum Type
	{
		CHAR, INT, FLOAT, DOUBLE, INIT
	};
	Type	type;
	std::string	literal;
	bool	infNanFlag;
	int		dotFlag;
	int		fFlag;

	char	_c;
	int		_i;
	float	_f;
	double	_d;
	
	class InvalidInputException : public std::exception {
	public:
		const char *what() const throw();
	};
	bool	detectChar();
	bool	detectInfNan();
	bool	checkFlags();
	void	detectNumType();

	void	(Converter::*f[4])();
	void	convertInfNan();
	void	convertChar();
	void	convertInt();
	void	convertFloat();
	void	convertDouble();
public :
	Converter(std::string literal);
	Converter(const Converter &other);
	Converter &operator=(const Converter &rhs);
	~Converter();

	void	detect();
	void	convert();
};

#endif

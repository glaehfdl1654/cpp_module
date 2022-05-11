/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:07:30 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/11 17:31:58 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>

class Converter
{
private :
	std::string	literal;
	char	character;
	bool	isNum;
	bool	infNanFlag;
	class InvalidInputException : public std::exception {
	public:
		const char *what() const throw();
	};
	bool	detectChar();
	bool	detectInfNan();
	bool	checkFlags();

	void	printChar();
	void	printInfNan();
	void	printNum();
public :
	Converter(std::string literal);
	Converter(const Converter &other);
	Converter &operator=(const Converter &rhs);
	~Converter();

	void	convert();
};

#endif

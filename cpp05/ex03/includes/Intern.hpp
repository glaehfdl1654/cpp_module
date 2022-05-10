/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:48:25 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 21:58:28 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class Form;

class Intern
{
private :
	Form *createShrubberyForm(const std::string &target);
	Form *createRobotomyForm(const std::string &target);
	Form *createPresidentialForm(const std::string &target);
	class NoMatchingFormNameException : public std::exception
	{
		public:
			const char *what() const throw();
	};
public :
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &rhs);
	~Intern();

	Form	*makeForm(const std::string &Name, const std::string &target);
};

#endif

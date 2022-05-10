/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:48:25 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 22:34:34 by jaejeong         ###   ########.fr       */
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
	Form	*createShrubberyForm(const std::string &target);
	Form	*createRobotomyForm(const std::string &target);
	Form	*createPresidentialForm(const std::string &target);
	Form	*(Intern::*f[3])(const std::string &target);
public :
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &rhs);
	~Intern();

	Form	*makeForm(const std::string &Name, const std::string &target);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:22:33 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/10 22:08:40 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("shrubbery", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: Form("shrubbery", 145, 137), target(other.getTarget())
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	target = rhs.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string		ShrubberyCreationForm::getTarget() const
{
	return (target);
}

void	ShrubberyCreationForm::formAction() const
{
	std::fstream	out(target + "_shrubbery", std::fstream::out | std::fstream::trunc);

	if (out.fail())
		throw (FileCanNotOpenException());
	out << "                * *\n"
		<< "           *    *  * \n"
		<< "      *  *    *     *  * \n"
		<< "     *     *    *  *    *\n"
		<< " * *   *    *    *    *   *\n"
		<< " *     *  *    * * *  *    *\n"
		<< " *   *     * *#   # *   *\n"
		<< "  *      #.  #: #  * *    *\n"
		<< " *   * *  #. ##        *\n"
		<< "   *        ###\n"
		<< "              ##\n"
		<< "              ##.\n"
		<< "              .##:\n"
		<< "              ;###\n"
		<< "            ,####.\n"
		<< "           .######. \n";
	out.close();
}

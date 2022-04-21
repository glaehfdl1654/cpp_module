/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:34:27 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/21 17:10:38 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::GetFirstName(void) const
{
	return (firstName);
}

std::string	Contact::GetLastName(void) const
{
	return (lastName);
}

std::string	Contact::GetNickName(void) const
{
	return (nickName);
}

std::string	Contact::GetPhoneNumber(void) const
{
	return (phoneNumber);
}

std::string	Contact::GetDarkestSecret(void) const
{
	return (darkestSecret);
}

void	Contact::SetFirstName(std::string str)
{
	firstName = str;
}

void	Contact::SetLastName(std::string str)
{
	lastName = str;
}

void	Contact::SetNickName(std::string str)
{
	nickName = str;
}

void	Contact::SetPhoneNumber(std::string str)
{
	phoneNumber = str;
}

void	Contact::SetDarkestSecret(std::string str)
{
	darkestSecret = str;
}

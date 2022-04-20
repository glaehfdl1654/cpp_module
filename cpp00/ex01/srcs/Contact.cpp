/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:34:27 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/21 01:06:06 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::GetFirstName(void) const
{
	return (Contact::firstName);
}

std::string	Contact::GetLastName(void) const
{
	return (Contact::lastName);
}

std::string	Contact::GetNickName(void) const
{
	return (Contact::nickName);
}

std::string	Contact::GetPhoneNumber(void) const
{
	return (Contact::phoneNumber);
}

std::string	Contact::GetDarkestSecret(void) const
{
	return (Contact::darkestSecret);
}

void	Contact::SetFirstName(std::string str)
{
	Contact::firstName = str;
}

void	Contact::SetLastName(std::string str)
{
	Contact::lastName = str;
}

void	Contact::SetNickName(std::string str)
{
	Contact::nickName = str;
}

void	Contact::SetPhoneNumber(std::string str)
{
	Contact::phoneNumber = str;
}

void	Contact::SetDarkestSecret(std::string str)
{
	Contact::darkestSecret = str;
}

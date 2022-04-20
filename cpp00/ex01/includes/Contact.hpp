/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:34:24 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/21 00:52:05 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
private :
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
public :
	std::string	GetFirstName(void) const;
	std::string	GetLastName(void) const;
	std::string	GetNickName(void) const;
	std::string	GetPhoneNumber(void) const;
	std::string	GetDarkestSecret(void) const;
	void	SetFirstName(std::string str);
	void	SetLastName(std::string str);
	void	SetNickName(std::string str);
	void	SetPhoneNumber(std::string str);
	void	SetDarkestSecret(std::string str);
};

#endif

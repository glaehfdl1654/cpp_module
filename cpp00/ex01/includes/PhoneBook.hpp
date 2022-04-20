/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:09:37 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/21 01:27:08 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private :
	int		recentContactIndex;
	bool	full;
	Contact	contact[8];
	std::string	GetOneLine(void) const;
	void	PrintTenLetter(std::string str) const;
	void	PrintContactInfo(int i) const;
public :
	PhoneBook(void) : recentContactIndex(-1), full(false) {};
	void	Add(void);
	void	Search(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:09:37 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/25 21:11:34 by jaejeong         ###   ########.fr       */
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
	void	PrintTenLetter(std::string str) const;
	void	PrintContactSummaryInfo(int i) const;
	void	PrintContactAllInfo(int i) const;
public :
	PhoneBook(void) : recentContactIndex(-1), full(false) {};
	void	Add(void);
	void	Search(void) const;
};

std::string	GetOneLine(void);

#endif

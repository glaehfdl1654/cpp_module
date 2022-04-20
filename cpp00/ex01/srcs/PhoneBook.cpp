/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:34:29 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/21 01:27:28 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::setfill;
using std::setw;

std::string	PhoneBook::GetOneLine(void) const
{
	std::string	str;

	cin.ignore();
	getline(cin, str);
	return (str);
}

void	PhoneBook::PrintTenLetter(std::string str) const
{
	if (str.length() <= 10)
		cout << setfill(' ') << setw(10) << str << endl;
	else
		cout << setfill(' ') << setw(9) << str << '.' << endl;
}

void	PhoneBook::PrintContactInfo(int i) const
{
	cout << contact[i].GetFirstName
}

void	PhoneBook::Add(void)
{
	int	&i = recentContactIndex;
	std::string	input;

	if (++recentContactIndex == 8)
	{
		recentContactIndex = 0;
		full = true;
	}
	cout << "firstName : ";
	contact[i].SetFirstName(GetOneLine());
	cout << "lastName : ";
	contact[i].SetLastName(GetOneLine());
	cout << "nickName : ";
	contact[i].SetNickName(GetOneLine());
	cout << "phoneNumber : ";
	contact[i].SetPhoneNumber(GetOneLine());
	cout << "darkestSecret : ";
	contact[i].SetDarkestSecret(GetOneLine());
}

void	PhoneBook::Search(void) const
{
	if (full == true)
	{
		for (int i = recentContactIndex + 1; i < 8; i++)
			PrintContactInfo(i);
	}
	for (int i = 0; i <= recentContactIndex; i++)
		PrintContactInfo(i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:34:29 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/25 19:43:55 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

void	PhoneBook::PrintTenLetter(std::string str) const
{
	if (str.length() <= 10)
		cout << std::setw(10) << str;
	else
		cout << str.substr(0, 9) << '.';
}

void	PhoneBook::PrintContactSummaryInfo(int i) const
{
	cout << "       " << i << '|';
	PrintTenLetter(contact[i].GetFirstName());
	cout << '|';
	PrintTenLetter(contact[i].GetLastName());
	cout << '|';
	PrintTenLetter(contact[i].GetNickName());
	cout << endl;
}

void	PhoneBook::PrintContactAllInfo(int i) const
{
	cout << "FirstName: " << contact[i].GetFirstName() << endl;
	cout << "LastName: " <<contact[i].GetLastName() << endl;
	cout << "NickName: " <<contact[i].GetNickName() << endl;
	cout << "PhoneNumber: " <<contact[i].GetPhoneNumber() << endl;
	cout << "DarkestSecret: " <<contact[i].GetDarkestSecret() << endl;
}

void	PhoneBook::Add(void)
{
	int	&i = recentContactIndex;
	std::string	input;

	if (++i == 8)
	{
		i = 0;
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
	int i;

	if (recentContactIndex == -1)
	{
		cout << "No contact" << endl;
		return ;
	}
	for (i = 0; i <= recentContactIndex; i++)
		PrintContactSummaryInfo(i);
	if (full == true)
	{
		for (i = recentContactIndex + 1; i < 8; i++)
			PrintContactSummaryInfo(i);
	}
	while (1)
	{
		// std::string	input;
		cout << "Choose correct index : ";
		// input = GetOneLine();
		cin >> i;
		cin.ignore();
		if (cin.eof())
		{
			cout << "EOF" << endl;
			exit(0);
		}
		if (cin.fail()) {
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			continue;
		}
		if (!(0 <= i && i < 8))
			continue ;
		if ((i > recentContactIndex) && (full == false))
			continue ;
		break ;
	}
	PrintContactAllInfo(i);
}

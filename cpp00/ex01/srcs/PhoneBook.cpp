/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:34:29 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/21 18:03:35 by jaejeong         ###   ########.fr       */
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
// 문자열의 맨 처음 문자가 꼭 잘려서 저장됨. 확인!!!!!!!!!!!!!!!!!
{
	std::string	str;

	cin.ignore();
	getline(cin, str);
	return (str);
}

void	PhoneBook::PrintTenLetter(std::string str) const
{
	if (str.length() <= 10)
		cout << setw(10) << str;
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
	cout << contact[i].GetFirstName() << endl;
	cout << contact[i].GetLastName() << endl;
	cout << contact[i].GetNickName() << endl;
	cout << contact[i].GetPhoneNumber() << endl;
	cout << contact[i].GetDarkestSecret() << endl;
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
		cout << "Choose correct index : ";
		cin >> i;
		if (!(0 <= i && i < 8))
			continue ;
		if ((i > recentContactIndex) && (full == false))
			continue ;
		break ;
	}
	PrintContactAllInfo(i);
}

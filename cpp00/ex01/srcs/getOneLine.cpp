/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getOneLine.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:27:14 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/25 19:44:39 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

std::string	GetOneLine(void)
{
	std::string	str;

	std::getline(cin >> std::ws, str);
	if (cin.eof())
	{
		cout << "EOF" << endl;
		exit(0);
	}
	return (str);
}

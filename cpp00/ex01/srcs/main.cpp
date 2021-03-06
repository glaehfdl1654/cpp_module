/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:09:40 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/25 18:37:37 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <PhoneBook.hpp>

using std::cin;
using std::cout;
using std::endl;

int	main(void)
{
	PhoneBook	phoneBook;

	while (1)
	{
		std::string	input;

		cout << "Choose Command(ADD, SEARCH, EXIT) : ";
		input = GetOneLine();
		if (input == "ADD")
			phoneBook.Add();
		else if (input == "SEARCH")
			phoneBook.Search();
		else if (input == "EXIT")
			break ;
		else
			cout << "Wrong Command" << endl;
	}
	return (0);
}

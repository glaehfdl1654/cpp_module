/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:23:48 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/12 20:15:26 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	try
	{
		std::cout << "[create numArr]" << std::endl;
		Array<int>	numArr(5);
		for (int i = 0; i < 5; i++)
		{
			numArr[i] = i * 10;
			std::cout << "numArr[" << i << "] : " << numArr[i] << std::endl;
		}
		std::cout << std::endl;


		std::cout << "[copy numArr to numArr2]" << std::endl;
		Array<int>	numArr2(numArr);
		numArr[1] = -123;
		numArr[2] = -456;
		for (int i = 0; i < 5; i++)
			std::cout << "numArr[" << i << "] : " << numArr[i] << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << "numArr2[" << i << "] : " << numArr2[i] << std::endl;
		std::cout << std::endl;


		std::cout << "[create stringArr]" << std::endl;
		Array<std::string>	stringArr(3);
		stringArr[0] = "hello";
		stringArr[1] = "hi";
		stringArr[2] = "42";
		for (int i = 0; i < 3; i++)
			std::cout << "stringArr[" << i << "] : " << stringArr[i] << std::endl;
		std::cout << std::endl;


		std::cout << "[assignment stringArr to stringArr2]" << std::endl;
		Array<std::string>	stringArr2(0);
		stringArr2 = stringArr;
		stringArr[0] = "Is it change?";
		for (int i = 0; i < 3; i++)
			std::cout << "stringArr[" << i << "] : " << stringArr[i] << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "stringArr2[" << i << "] : " << stringArr2[i] << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "[wrong index test]" << std::endl;
	Array<float>	floatArr(5);
	Array<char>		charArr(10);
	try
	{
		floatArr[3] = 42.42f;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		floatArr[10] = 6.5f;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		charArr[-5] = 'Y';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

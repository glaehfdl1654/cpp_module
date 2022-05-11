/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:18:28 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/11 17:36:24 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <Converter.hpp>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Use only one argument." << std::endl;
		return 0;
	}
	Converter	converter(argv[1]);
	try
	{
		converter.convert();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

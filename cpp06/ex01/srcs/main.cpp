/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:17:11 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/11 19:19:43 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data	data = {42, 42.42, "hello"};
	uintptr_t	raw;
	Data 		*dataPtr;

	std::cout << "[Original]" << std::endl;
	std::cout << data.i << std::endl;
	std::cout << data.d << std::endl;
	std::cout << data.str << std::endl;
	std::cout << &data << std::endl << std::endl;

	std::cout << "[Serialize & Deserialize]" << std::endl;
	raw = serialize(&data);
	dataPtr = deserialize(raw);

	std::cout << raw << std::endl << std::endl;

	std::cout << "[After]" << std::endl;
	std::cout << dataPtr->i << std::endl;
	std::cout << dataPtr->d << std::endl;
	std::cout << dataPtr->str << std::endl;
}

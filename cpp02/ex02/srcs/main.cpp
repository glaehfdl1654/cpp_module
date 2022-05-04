/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:38:34 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/04 22:31:50 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;


	// std::cout << "\n";

	// std::cout << a << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;
	// std::cout << Fixed::min(a, b) << std::endl;
	
	// std::cout << "\n";

	// Fixed	c(10);
	// Fixed	d(2.5f);
	
	// std::cout << (c > d) << std::endl;
	// std::cout << (c < d) << std::endl;
	// std::cout << (c >= d) << std::endl;
	// std::cout << (c <= d) << std::endl;
	// std::cout << (c == d) << std::endl;
	// std::cout << (c != d) << std::endl;
	
	// std::cout << "\n";

	// std::cout << (c + d) << std::endl;
	// std::cout << (c - d) << std::endl;
	// std::cout << (c * d) << std::endl;
	// std::cout << (c / d) << std::endl;

	// std::cout << "\n";

	
	
	return (0);
}

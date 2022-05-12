/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:24:21 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/12 16:48:00 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;

	std::cout << "[Test Char]" << std::endl;
	char e = 'e', f = 'f';
	std::cout << "(before swap) e : " << e << ", f : " << f << std::endl;
	swap(e, f);
	std::cout << "(after swap) e : " << e << ", f : " << f << std::endl;
	std::cout << "min(e, f) : " << min(e, f) << std::endl;
	std::cout << "max(e, f) : " << max(e, f) << std::endl;

	std::cout << std::endl;

	std::cout << "[Test double]" << std::endl;
	double g = 1.1, h = 22.22;
	std::cout << "(before swap) g : " << g << ", h : " << h << std::endl;
	swap(g, h);
	std::cout << "(after swap) g : " << g << ", h : " << h << std::endl;
	std::cout << "min(g, h) : " << min(g, h) << std::endl;
	std::cout << "max(g, h) : " << max(g, h) << std::endl;

	std::cout << std::endl;
	
}

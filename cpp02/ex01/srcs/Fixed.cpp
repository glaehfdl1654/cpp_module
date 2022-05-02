/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:49:43 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 03:48:36 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixedInt(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	fixedInt = num << fractionalBit;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	const int scalingFactor = (1 << fractionalBit);
	fixedInt = roundf(num * scalingFactor);
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	fixedInt = rhs.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &num)
{
	os << num.getRawBits() / 256.0f;
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (fixedInt);
}

void	Fixed::setRawBits(int const raw)
{
	fixedInt = raw;
}

float	Fixed::toFloat(void) const
{
	return (fixedInt / 256.0f);
}

int	Fixed::toInt(void) const
{
	return (fixedInt >> fractionalBit);
}

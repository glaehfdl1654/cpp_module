/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:38:36 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/26 02:18:23 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
	: fixedInt(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	fixedInt = num << fractionalBit;
}

Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called" << std::endl;
	fixedInt = roundf(num * 256);
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &another)
{
	fixedInt = another.fixedInt;
	return (*this);
}

const Fixed Fixed::operator+(Fixed const &another) const
{
	Fixed tmp = *this;
	tmp.fixedInt += another.fixedInt / 256.0f;
	return (tmp);
}

const Fixed Fixed::operator-(Fixed const &another) const
{
	Fixed tmp = *this;
	tmp.fixedInt -= another.fixedInt / 256.0f;
	return (tmp);
}

const Fixed Fixed::operator*(Fixed const &another) const
{
	Fixed tmp = *this;
	tmp.fixedInt *= another.fixedInt / 256.0f;
	return (tmp);
}

const Fixed Fixed::operator/(Fixed const &another) const
{
	Fixed tmp = *this;
	tmp.fixedInt /= another.fixedInt / 256.0f;
	return (tmp);
}

bool	Fixed::operator>(Fixed const &another) const
{
	return (fixedInt > another.fixedInt);
}

bool	Fixed::operator<(Fixed const &another) const
{
	return (fixedInt < another.fixedInt);
}

bool	Fixed::operator>=(Fixed const &another) const
{
	return (fixedInt >= another.fixedInt);
}

bool	Fixed::operator<=(Fixed const &another) const
{
	return (fixedInt <= another.fixedInt);
}

bool	Fixed::operator==(Fixed const &another) const
{
	return (fixedInt == another.fixedInt);
}

bool	Fixed::operator!=(Fixed const &another) const
{
	return (fixedInt != another.fixedInt);
}

Fixed	&Fixed::operator++()
{
	++fixedInt;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--fixedInt;
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	fixedInt++;
	return (tmp);
}

const Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	fixedInt--;
	return (tmp);
}

Fixed& Fixed::min(Fixed& a1, Fixed& a2)
{
	return a1 < a2 ? a1 : a2;
}

const Fixed& Fixed::min(const Fixed& a1, const Fixed& a2)
{
	return a1 < a2 ? a1 : a2;
}

Fixed& Fixed::max(Fixed& a1, Fixed& a2)
{
	return a1 > a2 ? a1 : a2;	
}

const Fixed& Fixed::max(const Fixed& a1, const Fixed& a2)
{
	return a1 > a2 ? a1 : a2;
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

std::ostream& operator<<(std::ostream& os, const Fixed &num)
{
	os << num.getRawBits() / 256.0f;
	return os;
}

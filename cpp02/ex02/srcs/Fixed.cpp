/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:38:36 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/05 10:14:17 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedInt(0)
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
	const int scalingFactor = (1 << fractionalBit);
	fixedInt = static_cast<int>(roundf(num * scalingFactor));
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

Fixed &Fixed::operator=(const Fixed &rhs)
{
	fixedInt = rhs.fixedInt;
	return (*this);
}

const Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed tmp = *this;
	tmp.fixedInt += rhs.fixedInt;
	return (tmp);
}

const Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed tmp = *this;
	tmp.fixedInt -= rhs.fixedInt;
	return (tmp);
}

const Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed tmp = *this;
	tmp.fixedInt *= rhs.fixedInt / 256.0f;
	return (tmp);
}

const Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed tmp = *this;
	tmp.fixedInt /= rhs.fixedInt / 256.0f;
	return (tmp);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (fixedInt > rhs.fixedInt);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (fixedInt < rhs.fixedInt);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (fixedInt >= rhs.fixedInt);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (fixedInt <= rhs.fixedInt);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (fixedInt == rhs.fixedInt);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (fixedInt != rhs.fixedInt);
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
	const int scalingFactor = (1 << fractionalBit);
	return (static_cast<float>(fixedInt) / scalingFactor);
}

int	Fixed::toInt(void) const
{
	return (fixedInt >> fractionalBit);
}

std::ostream& operator<<(std::ostream& os, const Fixed &num)
{
	os << num.toFloat();;
	return os;
}

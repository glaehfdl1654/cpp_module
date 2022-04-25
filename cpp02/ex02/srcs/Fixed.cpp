/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:38:36 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/26 00:08:19 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	
}

Fixed::Fixed(const Fixed &fixed)
{
	
}

Fixed::Fixed(const int num)
{
	
}

Fixed::Fixed(const float floating_num)
{
	
}

Fixed::~Fixed()
{
	
}

Fixed &Fixed::operator=(const Fixed &another)
{
	value = another.value;
	return (*this);
}

const Fixed Fixed::operator+(Fixed const &another) const
{
	Fixed tmp = *this;
	tmp.value += another.value;
	return (tmp);
}

const Fixed Fixed::operator-(Fixed const &another) const
{
	Fixed tmp = *this;
	tmp.value -= another.value;
	return (tmp);
}

const Fixed Fixed::operator*(Fixed const &another) const
{
	Fixed tmp = *this;
	tmp.value *= another.value;
	return (tmp);
}

const Fixed Fixed::operator/(Fixed const &another) const
{
	Fixed tmp = *this;
	tmp.value /= another.value;
	return (tmp);
}

bool	Fixed::operator>(Fixed const &another) const
{
	return (value > another.value);
}

bool	Fixed::operator<(Fixed const &another) const
{
	return (value < another.value);
}

bool	Fixed::operator>=(Fixed const &another) const
{
	return (value >= another.value);
}

bool	Fixed::operator<=(Fixed const &another) const
{
	return (value <= another.value);
}

bool	Fixed::operator==(Fixed const &another) const
{
	return (value == another.value);
}

bool	Fixed::operator!=(Fixed const &another) const
{
	return (value != another.value);
}

Fixed	&Fixed::operator++()
{
	++value;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--value;
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	value++;
	return (tmp);
}

const Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	value--;
	return (tmp);
}

static Fixed& min(Fixed& a1, Fixed& a2)
{
	return a1 < a2 ? a1 : a2;	
}

static const Fixed& min(const Fixed& a1, const Fixed& a2)
{
	return a1 < a2 ? a1 : a2;
}

static Fixed& max(Fixed& a1, Fixed& a2)
{
	return a1 > a2 ? a1 : a2;	
}

static const Fixed& max(const Fixed& a1, const Fixed& a2)
{
	return a1 > a2 ? a1 : a2;
}


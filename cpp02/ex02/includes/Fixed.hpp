/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:37:49 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/04 21:47:26 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private :
	int		fixedInt;
	static const int	fractionalBit = 8;
public :
	Fixed();
	Fixed(const int num);
	Fixed(const float floating_num);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &rhs);
	~Fixed();

	const Fixed operator+(Fixed const &another) const;
	const Fixed operator-(Fixed const &another) const;
	const Fixed operator*(Fixed const &another) const;
	const Fixed operator/(Fixed const &another) const;

	bool	operator>(Fixed const &another) const;
	bool	operator<(Fixed const &another) const;
	bool	operator>=(Fixed const &another) const;
	bool	operator<=(Fixed const &another) const;
	bool	operator==(Fixed const &another) const;
	bool	operator!=(Fixed const &another) const;

	Fixed	&operator++();
	Fixed	&operator--();
	const	Fixed operator++(int);
	const	Fixed operator--(int);

	static Fixed& min(Fixed& a1, Fixed& a2);
	static const Fixed& min(const Fixed& a1, const Fixed& a2);
	static Fixed& max(Fixed& a1, Fixed& a2);
	static const Fixed& max(const Fixed& a1, const Fixed& a2);

	float	toFloat() const;
	int		toInt() const;
	int		getRawBits() const;
	void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed &num);

#endif

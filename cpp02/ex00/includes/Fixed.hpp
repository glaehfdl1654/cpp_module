/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:42:37 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 02:42:56 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private: 
	int	fixedInt;
	static const int	fractionalBit = 8;

public:
	Fixed(void);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& rhs);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif

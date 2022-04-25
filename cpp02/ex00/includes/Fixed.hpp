/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:42:37 by jaejeong          #+#    #+#             */
/*   Updated: 2022/04/25 22:16:17 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_H__
# define _FIXED_H__

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

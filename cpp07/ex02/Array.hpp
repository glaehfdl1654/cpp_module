/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:23:50 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/12 19:58:48 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private :
	T	*_array;
	unsigned int	_size;
public :
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	Array &operator=(const Array &rhs);
	~Array();

	T	&operator[](long index) const;
	unsigned int	size() const;
};

template <typename T>
Array<T>::Array()
	: _array(new T[0]), _size(0)
{
	
}

template <typename T>
Array<T>::Array(unsigned int n)
	: _array(new T[n]), _size(n)
{
	
}

template <typename T>
Array<T>::Array(const Array &other)
{
	_array = new T[0];
	*this = other;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	if (this == &other)
		return (*this);
	delete []_array;
	_size = other.size();
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete []_array;
}

template <typename T>
T	&Array<T>::operator[](long index) const
{
	if (!(0 <= index && index <= _size))
		throw (std::out_of_range("out of range."));
	return (_array[index]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

#endif

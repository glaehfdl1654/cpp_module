/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:35:00 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 15:07:38 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private: 

public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& rhs);
	virtual ~Dog();

	virtual void	makeSound(void) const;
};

#endif

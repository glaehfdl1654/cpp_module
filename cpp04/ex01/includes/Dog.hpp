/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:35:00 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 11:26:28 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	Dog(const Brain &brain);
	Dog(const Dog& other);
	Dog& operator=(const Dog& rhs);
	virtual ~Dog();

	virtual void	makeSound(void) const;
	virtual void	setBrain(const Brain &newBrain);
	virtual void	speakIdea(int start, int end) const;
};

#endif

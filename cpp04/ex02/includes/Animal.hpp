/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:02:09 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 17:40:15 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
public:
	Animal(std::string type = "Unknown");
	Animal(const Animal& other);
	Animal& operator=(const Animal& rhs);
	virtual ~Animal();

	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
	virtual void	setBrain(const Brain &newBrain) = 0;
	virtual void	speakIdea(int start, int end) const = 0;
};

#endif

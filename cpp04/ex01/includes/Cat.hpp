/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:27:31 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 11:26:26 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Brain &brain);
	Cat(const Cat& other);
	Cat& operator=(const Cat& rhs);
	virtual ~Cat();

	virtual void	makeSound(void) const;
	virtual void	setBrain(const Brain &newBrain);
	virtual void	speakIdea(int start, int end) const;
};

#endif

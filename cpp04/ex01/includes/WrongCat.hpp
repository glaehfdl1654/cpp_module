/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:42:24 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 15:32:19 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
private:
	Brain	*brain;
public:
	WrongCat();
	WrongCat(Brain &brain);
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& rhs);
	virtual ~WrongCat();

	virtual void	makeSound(void) const;
	virtual void	setBrain(Brain &newBrain);
	virtual void	speakIdea(int start, int end) const;
};

#endif

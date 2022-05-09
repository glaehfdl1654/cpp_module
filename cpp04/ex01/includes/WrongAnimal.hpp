/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:42:13 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 15:33:26 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include "Brain.hpp"

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal(std::string type = "Unknown");
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& rhs);
	virtual ~WrongAnimal();

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
	virtual void	setBrain(Brain &newBrain);
	virtual void	speakIdea(int start, int end) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:42:13 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 15:07:43 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal(std::string type = "Unknown");
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& rhs);
	~WrongAnimal();

	std::string		getType(void) const;
	void	makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:20:18 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/09 15:02:52 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
private:
	std::string	idea[100];
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& rhs);
	~Brain();

	void	setIdea(int index, const std::string &newIdea);
	std::string	getIdea(int index) const;
};

#endif

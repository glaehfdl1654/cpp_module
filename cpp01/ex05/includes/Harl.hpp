/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejeong <jaejeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:46:49 by jaejeong          #+#    #+#             */
/*   Updated: 2022/05/03 02:12:52 by jaejeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
private :
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	(Harl::*f[4])(void);
public :
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif

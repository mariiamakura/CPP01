/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:28:05 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/30 17:55:02 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	public:
		Zombie();
		~Zombie();
		std::string getName(void) const;
		void setName(std::string name);
		void announce(void);
		
	private:
		std::string _name;	
};

Zombie* zombieHorde( int N, std::string name );

#endif

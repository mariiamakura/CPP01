/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:04:44 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/30 17:01:55 by mparasku         ###   ########.fr       */
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
		void announce (void);
		std::string getName(void) const;
		void setName(std::string name);

	private:
		std::string _name;	
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );;

#endif
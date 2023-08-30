/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:55:24 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/30 17:03:39 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	//key word "new" dynamically allocate memory 
	Zombie *myZombie = new Zombie();
	myZombie->setName(name);
	return myZombie;
}

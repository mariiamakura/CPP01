/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:34:43 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/30 17:06:20 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie myZombie;
	Zombie *ptrZombie;

	myZombie.setName("Foo");
	myZombie.announce();

	ptrZombie = newZombie("Dinamic");
	ptrZombie->announce();

	randomChump("Random");

	//to free memory
	delete ptrZombie; 
}
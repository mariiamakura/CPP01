/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:38:00 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/30 17:58:42 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	
	Zombie *zombieArray = new Zombie[N];
	if (!zombieArray)
		return NULL;
	for (int i = 0; i < N; i++)
	{
		zombieArray->setName(name);
		zombieArray->announce();
	}
	return(zombieArray);
}

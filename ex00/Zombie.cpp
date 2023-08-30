/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:33:21 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/30 17:08:33 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	//std::cout << "constuctor is called" << std::endl;
};

Zombie::~Zombie() {
	std::cout << "::destructor:: " << this->_name << " died" << std::endl;
};

std::string Zombie::getName(void) const {
	return this->_name;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
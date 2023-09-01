/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:27:11 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/01 16:15:55 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_is_armed = false;
}

HumanB::~HumanB() {}

std::string HumanB::getName() const {
	return this->_name;
}

void HumanB::setName(std::string name) {
	this->_name = name;
}
void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	this->_is_armed = true;
}

void HumanB::attack() const {
	if (this->_is_armed) {
		std::cout << this->_name << " attacks with their " << this->_weapon->getType()
							<< std::endl;
	} else {
		std::cout << this->_name << " attacks with nothing" << std::endl;
	}
}
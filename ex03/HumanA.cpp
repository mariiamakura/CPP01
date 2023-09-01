/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:20:43 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/01 13:46:02 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

std::string HumanA::getName() const { 
	return this->_name;
}

void HumanA::setName(std::string name) { 
	this->_name = name;
}

void HumanA::setWeapon(Weapon &weapon) {
	this->_weapon = weapon;
}
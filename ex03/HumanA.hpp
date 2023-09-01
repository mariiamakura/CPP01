/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:17:06 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/01 13:37:04 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		
		std::string getName() const;
		void setName(std::string name);
		void setWeapon(Weapon &weapon);
		void attack() const;
	private:
		Weapon &_weapon;
		std::string _name;
};

#endif
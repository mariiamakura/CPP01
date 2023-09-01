/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:25:41 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/01 13:38:40 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();

		std::string getName() const;
		void setName(std::string name);
		void setWeapon(Weapon &weapon);
		void attack() const;
	private:
		Weapon &_weapon;
		std::string _name;
};

#endif
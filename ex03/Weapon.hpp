/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:08:13 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/01 13:30:36 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string &getType() const;
		void setType(std::string type);
		
	private:
		std::string _type;
};

#endif
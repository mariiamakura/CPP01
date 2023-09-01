/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:36:27 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/01 19:06:01 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void) {
    std::cout << "debug foo()" << std::endl;
}

void Harl::info(void) {
    std::cout << "info foo()" << std::endl;
}

void Harl::warning(void) {
    std::cout << "warning foo()" << std::endl;
}

void Harl::error(void) {
    std::cout << "error foo()" << std::endl;
}


void Harl::complain(std::string level) {
    bool isOption;
    void (Harl::*foo[4])() = {&Harl::debug, &Harl::info, 
                                &Harl::warning, &Harl::error};
    std::string option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    isOption = false;
    for (int i = 0; i < 4; i++)
    {
        if (level == option[i]) {
            (this->*foo[i])();
            isOption = true;
            break;
        }
    }
    if (isOption == false) {
        std::cout << "Foo() not found for " << level << std::endl;
    }
}

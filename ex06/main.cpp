/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:13:37 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/01 19:20:37 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {

    Harl myHarl; 
    if (ac != 2) {
        std::cout << "Wrong number of argument. Format DEBUG/INFO/WARNING/ERROR" << std::endl;
        return (EXIT_FAILURE);
    }

    std::string level = av[1];
    myHarl.harlFilter(level);
}
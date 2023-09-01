/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:12:53 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/01 19:13:29 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
        void harlFilter(std::string level);
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    
};

#endif
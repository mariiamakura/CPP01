/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:05:35 by mparasku          #+#    #+#             */
/*   Updated: 2023/08/30 18:14:05 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "Adress of str: " << &str << std::endl;
	std::cout << "Adress of stringPTR: " << &stringPTR << std::endl; //pointer has a different address
	std::cout << "Adress of stringREF: " << &stringREF << std::endl;

	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl; //to see the ptr value it has to be dereferance with *
	std::cout << "Value of stringREF: " << stringREF << std::endl;
}
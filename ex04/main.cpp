/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:33:21 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/01 17:54:22 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool openFiles(char *file, std::ifstream &readFile, std::ofstream &outputFile) {
    
    std::string filename;
    readFile.open(file);
    //std::ios::out - if file doesn't exit - create
    //std::ios::trunc - if file exists, erase everything before writing
    if (!readFile) {
        std::cout << "Failed to open " << file <<std::endl << std::flush;
        return false;
    }
    filename = std::string(file) + ".replace";
    outputFile.open(filename, std::ios::out | std::ios::trunc);
    if (!outputFile) {
        std::cout << "Failed to create " << file <<std::endl;
        return false;
    }
    return true;
}

void replaceStr(std::string &buffer, std::string &find, std::string &replace) {
    size_t replace_pos;
    size_t erase_len;
    size_t replace_len;

    replace_pos = buffer.find(find);
    erase_len = find.length();
    replace_len = replace.length();
    while (replace_pos != std::string::npos)
    {
        buffer.erase(replace_pos, erase_len);
        buffer.insert(replace_pos, replace);
        replace_pos = buffer.find(find, replace_pos + replace_len);
    }
}

void copyBuffer(std::ifstream &readFile, std::ofstream &outputFile, char *s1, char *s2) {
    
    std::string buffer;
    std::string find;
    std::string replace;

    find = s1;
    replace = s2;
    while (getline(readFile, buffer)) {
        
        replaceStr(buffer, find, replace);
        outputFile << buffer;
        if (readFile.peek() != EOF) //.peek() returns next char
            outputFile << std::endl;
    }
}

int main(int ac, char **av) {
    
    std::ifstream readFile; //reading stream
    std::ofstream outputFile; //writing stream
    
    if (ac != 4) {
        std::cout << "Wrong number of argument. Format: filename, s1, s1" << std::endl;
        return (EXIT_FAILURE);
    }
    if (openFiles(av[1], readFile, outputFile) == false) {
        return (EXIT_FAILURE);
    }
    copyBuffer(readFile, outputFile, av[2], av[3]);
    readFile.close();
    outputFile.close();
    return 0;
}
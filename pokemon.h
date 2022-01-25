/*********************************************************************  
 ** Program Filename:  pokemon.h
 ** Author:   Bradley Rule
 ** Date: January 23rd, 2022
 ** Description: header file for pokemon
 ** Input: dex number, name, type, moves
 ** Output:  dex number, name, type, moves
 *********************************************************************/
#ifndef POKEMON_H
#define POKEMON_H
#include <stdlib.h>
#include <iostream>

class Pokemon{
    public:
    Pokemon();
    Pokemon(int, std::string, std::string);
    std::string get_moves(int);
    std::string get_type();
    std::string get_name();
    int get_number();
    void set_moves(std::string, std::string, std::string, std::string);
    private:
    int dex_number;
    std::string name;
    std::string type;
    std::string moves[4];
};
#endif 
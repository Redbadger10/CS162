/*********************************************************************  
 ** Program Filename:  pokedex.h
 ** Author:   Bradley Rule
 ** Date: January 23rd, 2022
 ** Description: header file for pokedex
 ** Input: number of pokemon, list of pokemon
 ** Output:  name, number of pokemon, list of pokemon
 *********************************************************************/
#ifndef POKEDEX_H
#define POKEDEX_H
#include <stdlib.h>
#include <iostream>
#include "pokemon.h"

using namespace std;

class Pokedex{
public:
Pokedex(string, int);
void add_pokemon(Pokemon*);
void print_pokemon();
void add_list(Pokemon*);

private:    
    string name;
    int total_pokemon;
    Pokemon* pokemon_list;
};
#endif
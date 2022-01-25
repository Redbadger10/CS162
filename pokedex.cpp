/*********************************************************************  
 ** Program Filename:  pokedex.cpp
 ** Author:   Bradley Rule
 ** Date: January 23rd, 2022
 ** Description: implementation file for pokedex
 ** Input: name, number of pokemon, list of pokemon
 ** Output:  number of pokemon, list of pokemon
 *********************************************************************/
#include "pokedex.h"
#include "pokemon.h"
using namespace std;


/*********************************************************************  
 ** Function:  constructor
 ** Description: sets up base information for the pokedex
 ** Parameters:  name of owner (string)
 ** Pre-Conditions: none
 ** Post-Conditions:  will want to fill the pokedex
 *********************************************************************/
Pokedex::Pokedex(string name, int total_pokemon){
    this->name = name;
    this->total_pokemon = total_pokemon;
    cout << "POKEDEX: " << this->total_pokemon << endl;
}


/*********************************************************************  
 ** Function:  ad_list
 ** Description: overwrites the current list of pokemon with a new list
 ** Parameters:  list of pokemon objects, size of list (int)
 ** Pre-Conditions: Must not already have a list of pokemon
 ** Post-Conditions:  none
 *********************************************************************/
void Pokedex::add_list(Pokemon * pokemon_list){
    this->pokemon_list = pokemon_list;
}


/*********************************************************************  
 ** Function:  add_pokemon
 ** Description: adds a new pokemon to the pokemon_list variable
 ** Parameters:  a Pokemon object
 ** Pre-Conditions: must have a fully created pokemon
 ** Post-Conditions:  none
 *********************************************************************/
void Pokedex::add_pokemon(Pokemon* pokemon){
    total_pokemon++;
    Pokemon* temp;
    cout << "0" << endl; // DELETE LATER
    temp = new Pokemon[total_pokemon];
    cout << "1" << endl; // DELETE LATER
    for(int i = 0; i < total_pokemon - 1; i++){
        temp[i] = pokemon_list[i];
    }
    cout << "2" << endl; // DELETE LATER
    temp[total_pokemon - 1] = *pokemon;
    cout << "3" << endl; // DELETE LATER
    delete[] pokemon_list;
    cout << "4" << endl; // DELETE LATER
    pokemon_list = temp;
    cout << "5" << endl; // DELETE LATER
}



/*********************************************************************  
 ** WIP **
 ** Function: print_pokemon 
 ** Description: prints out the entire list of pokemon in the dex
 ** Parameters:  none
 ** Pre-Conditions: must have pokemon in the dex
 ** Post-Conditions:  none
 ** notes: impoted from lab2 must make work with new requirements
 *********************************************************************/
void Pokedex::print_pokemon(){
    cout << total_pokemon;
    
   for(int i = 0; i < total_pokemon; i++){
        cout << "Number: " << this->pokemon_list[i].get_number() << endl;
        cout << "Name: " << this->pokemon_list[i].get_name() << endl;
        cout << "Type: " << this->pokemon_list[i].get_type() << endl;
        string* temp;
        for(int j = 0; j < 4; j++){
            temp[j] = this->pokemon_list[i].get_moves(j);
        }
        cout << "Moves: " << temp[0] << ", " << temp[1] << ", " << temp[2] << ", " << temp[3] << endl << endl;
   }
}
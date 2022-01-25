/*********************************************************************  
 ** Program Filename:  pokemon.cpp
 ** Author:   Bradley Rule
 ** Date: January 23rd, 2022
 ** Description: implementation file for pokemon
 ** Input: dex number, name, type, moves
 ** Output:  dex number, name, type, moves
 *********************************************************************/

#include "pokemon.h"

using namespace std;


/*********************************************************************  
 ** Function:  default Constructor
 ** Description: default constructor, sets the dex number to -1 for diagnostics
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
Pokemon::Pokemon(){  //should never run if dex number is -1 something went wrong
    dex_number = -1;
}


/*********************************************************************  
 ** Function:  constructor
 ** Description: gets and sets all the data for a pokemon except moves
 ** Parameters: dex number, name, and type 
 ** Pre-Conditions: must have all the information to pass in
 ** Post-Conditions:  n/a
 *********************************************************************/
Pokemon::Pokemon(int dex_number, string name, string type){
    this->dex_number = dex_number;
    this->name = name;
    this->type = type;
}


/*********************************************************************  
 ** Function:  get_number
 ** Description: returns the dex number of the pokemon
 ** Parameters:  none
 ** Pre-Conditions: must have a set dex number
 ** Post-Conditions:  none
 *********************************************************************/
int Pokemon::get_number(){
    return dex_number;
}


/*********************************************************************  
 ** Function:  get_name
 ** Description: returns name of pokemon
 ** Parameters:  none
 ** Pre-Conditions: must have already set a name upon construction
 ** Post-Conditions:  none
 *********************************************************************/
string Pokemon::get_name(){
    return name;
}


/*********************************************************************  
 ** Function:  set_moves
 ** Description: takes in 4 strings and fills the moves array with them
 ** Parameters: 4 strings, 1 for each move 
 ** Pre-Conditions: must have all moves prepared before calling
 ** Post-Conditions:  none
 *********************************************************************/
void Pokemon::set_moves(string move1, string move2, string move3, string move4){
    this->moves[0] = move1;
    this->moves[1] = move2;
    this->moves[2] = move3;
    this->moves[3] = move4;
}


/*********************************************************************  
 ** Function:  get_type
 ** Description: returns the type of the pokemon
 ** Parameters:  none
 ** Pre-Conditions: pokemon must have been given a specified type
 ** Post-Conditions:  none
 *********************************************************************/
string Pokemon::get_type(){
    return type;
}


/*********************************************************************  
 ** Function:  get_moves
 ** Description: take index number and returns name of move at that index
 ** Parameters:  index number (int)
 ** Pre-Conditions: pokemon must have already been given a list of 4 moves
 ** Post-Conditions:  
 *********************************************************************/
string Pokemon::get_moves(int index){
    return moves[index];
}
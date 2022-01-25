#include <iostream>
#include <stdlib.h>
#include "pokedex.h"
#include "pokemon.h"
#include <fstream>

using namespace std;










Pokedex* fill_dex(string filename){
    ifstream file(filename);
    Pokemon * pokemon_list;
    Pokemon * pokemon;
    int total_pokemon;
    int number;
    string name;
    string type;
    string move1;
    string move2;
    string move3;
    string move4;


    cout << "Please enter your name: " << endl; 
    cin >> name;
    file >> total_pokemon;
    pokemon_list = new Pokemon[total_pokemon];
    Pokedex * pokedex = new Pokedex(name, total_pokemon);
    cout << "here";
    for(int i = 0; i < total_pokemon; i++){
        file >> number;
        cout << i << ": " << number << endl; //DELETE LATER
        file >> name;
        cout << i << ": " << name << endl; //DELETE LATER
        file >> type;
        cout << i << ": " << type << endl; //DELETE LATER
        pokemon = new Pokemon(number, name, type);
        file >> move1;
        file >> move2;
        file >> move3;
        file >> move4;
        pokemon->set_moves(move1,move2,move3,move4);
        pokemon_list[i] = *pokemon;
    }
    cout << pokemon_list[1].get_name() << "PLEASE WORK" << endl;
    pokedex->add_list(pokemon_list);
    pokedex->print_pokemon();
    file.close();
    return pokedex;
}



string read_file(char * filename){
    string input = filename;
    ifstream file;
    file.open(input); 
    while(file.fail()){
        file.close();
        cout << "The file name you entered doesn't exist" << endl 
        << "Make sure that the file extension is included and re-enter your file name: " << endl;
        cin >> input;
        file.open(input);
    }
    file.close();
    cout << "file found" << endl << endl;
    return(input);
}



void command_line_error(int argc){
    if(argc != 2){
        cerr << "ERROR: A FILE NAME WAS NOT GIVEN" << endl;
        exit(EXIT_FAILURE);
    }
}


int main(int argc, char *argv[]){
    command_line_error(argc);
    string filename;
    filename = read_file(argv[1]);
    Pokedex* pokedex;
    pokedex = fill_dex(filename);
    cout << "hello" << endl;
    pokedex->print_pokemon();


    return 0;
}
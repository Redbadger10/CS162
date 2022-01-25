CC = g++ -std=c++11
TARGET = ./target/
EXE = main
TAR = Bradley_Rule_Pokedex.tar

$(EXE): $(TARGET) $(TARGET)pokedex.o $(TARGET)pokemon.o $(TARGET)main.o
        $(CC) -o $(EXE) $(TARGET)pokedex.o $(TARGET)pokemon.o $(TARGET)main.o

$(TARGET)pokedex.o: pokedex.cpp
        $(CC) -c pokedex.cpp -o $(TARGET)pokedex.o

$(TARGET)pokemon.o: pokemon.cpp
        $(CC) -c pokemon.cpp -o $(TARGET)pokemon.o

$(TARGET)main.o: main.cpp
        $(CC) -c main.cpp -o $(TARGET)main.o

$(TARGET):
    mkdir $(TARGET)

clean:
    rm -rf $(TARGET)
    rm -f $(EXE)
    rm -f $(TAR)

tar:
    tar -cvf $(TAR) Makefile main.cpp pokedex.cpp pokemon.cpp pokedex.h pokemon.h pokedex_ascii.h
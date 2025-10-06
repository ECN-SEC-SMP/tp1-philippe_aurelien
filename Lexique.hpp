#pragma once

#include <string>
#include <map>

using namespace std;

class Lexique{
private :
    string nom;
    string content; 
    map<string, int> list_mot; // mot et nombre d'occurences

public :
    Lexique(string file);

    // Accesseurs
    string getNom();

};
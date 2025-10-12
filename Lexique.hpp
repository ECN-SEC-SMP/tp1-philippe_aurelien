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

    // Methodes
    void creerMap(); // fonction qui cree la map avec les mots et leur nombre d'occurence 
    void printListMot();

    // Accesseurs
    string getNom();
    string getContent();
    

};
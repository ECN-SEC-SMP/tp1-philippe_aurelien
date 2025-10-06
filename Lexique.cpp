#include "Lexique.hpp"
#include <iostream>
#include "utilitaire.hpp"

using namespace std;

Lexique::Lexique(string file){
    this->nom = file;
    string path = "tp1-Lexique-fichiers/" ;
    path.append(file);
    bool ok = util::readFileIntoString(path,content);
    
    if (ok) {
        cout<<"Objet lexique cree"<<endl;
    }else{
        cout<<"Objet lexique NON cree"<<endl;
    }

}

string Lexique::getNom(){
    return this->nom;
}
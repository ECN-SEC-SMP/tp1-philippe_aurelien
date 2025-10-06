#include "Lexique.hpp"
#include <string>
#include "utilitaire.hpp"
#include <iostream>
#include <cstring>
#include <utility>
#include <sstream>

using namespace std;

Lexique::Lexique(string file){
    this->nom = file;

    string path = "tp1-Lexique-fichiers/" ;
    path.append(file); // create path

    bool ok = util::readFileIntoString(path,content);
    util::remove_punctuation(content);
    util::to_lower(content);
    this->creerMap();
    
    if (ok) { // debug
        cout<<"Objet lexique cree"<<endl;
    }else{
        cout<<"Objet lexique NON cree"<<endl;
    }

}


// Methodes

// void Lexique::creerMap(){
//     //char * charContent = content.data();
//     char * p;
//     p = strtok(&content[0], " ");
//     //p = strtok(charContent, "\"!?_-.,; \n");
//     while(p != NULL){
//         if (list_mot.find(string(p)) == list_mot.end()){
//             list_mot.insert(std::make_pair(string(p),1));
//         }else {
//             list_mot[string(p)]++;
//         }
//         p = strtok(NULL, " ");
//     }
// }

void Lexique::creerMap(){
    std::istringstream iss(content);
    std::string mot;
    while (iss >> mot) {
        if (list_mot.find(mot) == list_mot.end()) {
            list_mot[mot] = 1;
        } else {
            list_mot[mot]++;
        }
    }
}

void Lexique::printListMot(){
    for(auto& x: list_mot){
        cout<<x.first<<" : "<<x.second<<endl;
    }
}

// Accesseurs

string Lexique::getNom(){
    return this->nom;
}

string Lexique::getContent(){
    return this->content;
}
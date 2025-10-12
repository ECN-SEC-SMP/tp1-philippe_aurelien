#include "utilitaire.hpp"
#include "Lexique.hpp"
#include <iostream>

using namespace std;

int main(){
    Lexique * livre = new Lexique("lesMiserables_A.txt");
    cout << livre->getNom() << endl;
    //cout << livre->getContent() << endl;
    livre->printListMot();
    delete livre;
    return 0;
}
#include "utilitaire.hpp"
#include "Lexique.hpp"
#include <iostream>

using namespace std;

int main(){
    Lexique * livre = new Lexique("lesMiserables_A.txt");
    cout << livre->getNom() << endl;
    delete livre;
    return 0;
}
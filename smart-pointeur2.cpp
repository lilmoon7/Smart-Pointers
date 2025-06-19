#include <iostream>
#include <memory>
using namespace std;

unique_ptr<int> creeNombre(int valeur) {
    return make_unique<int>(valeur);
}
int main() {
    unique_ptr<int> valeur= creeNombre(1);
    cout << *valeur << endl;
}
/*1. Écrivez une fonction creerNombre(int valeur) qui retourne un unique_ptr<int>.
2. Affichez la valeur renvoyée.*/
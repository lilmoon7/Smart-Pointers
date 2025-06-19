#include <iostream>
#include <memory>
using namespace std;

int main() {
shared_ptr<int> sp= make_shared<int>(39);
weak_ptr<int> wp;
wp = sp;

if (auto spp = wp.lock()) {
    cout << "la valeur via weak_ptr" << spp << endl;
    }else {
    cout << "le pointeur est vide " << endl;
    }
    sp.reset();
    if (auto spp = wp.lock()) {
        cout << "la valeur via weak_ptr" << spp << endl;
    }else {
        cout << "le pointeur est vide " << endl;
    }
}

#include <iostream>
#include <memory>
using namespace std;
void afficher (weak_ptr <int[]> wp) {
    if (auto p = wp.lock()) {
        for (int i=0; i < 10; i++) {
            cout<<  p[i] << endl;
        }
    }else {
        cout<< " le table est vide "<< endl;
    }
}
int main() {
    int n;
    cout<<"saisir la taille du tableau : ";
    cin>>n;
    shared_ptr<int[]>spp= make_shared<int[]>(n);
    for (int i=0; i < 10; i++) {
        spp[i]=i+1;
    }
    weak_ptr <int[]> wp=spp;
    afficher(wp);
    spp.reset();
    afficher(wp);
    return 0;
}

#include <iostream>
#include <memory>
using namespace std;
void afficher(weak_ptr<int> wp) {
    if (auto p = wp.lock()) {
        cout <<"l'objet est valide " <<*p << endl;
    }else {
        cout <<"l'objet est null " <<endl;
    }
}
int main() {
    shared_ptr<int> v =make_shared<int>(10);
    afficher(v);
    v.reset();
    afficher(v);
    return 0;
}

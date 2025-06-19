#include <iostream>
#include <memory>
using namespace std;

void afficher ( shared_ptr<int[]> tab) {
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << endl;
    }
}
int main() {
    shared_ptr<int[]> t(new int[10]);
    for (int i = 0; i < 10; i++) {
        t[i] = i;
    }

    cout<< "avant"<< t.use_count() << endl;
    afficher (t);
    cout<< "apret" <<t.use_count() << endl;
    return 0;
}

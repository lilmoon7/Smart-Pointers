#include <iostream>
#include <memory>
using namespace std;
 shared_ptr<int> afficher (shared_ptr<int>ptr) {
     cout << *ptr << endl;
     cout<< ptr.use_count();
     return ptr;
 }
int main() {
     shared_ptr<int> p= make_shared<int>(1);
     p= afficher(p);
     cout << "ref : " <<p.use_count() << endl;
     return 0;
 }

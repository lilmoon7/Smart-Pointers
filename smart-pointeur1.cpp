#include <iostream>
#include <memory>

using namespace std;

int main() {
    unique_ptr<int> p = make_unique<int>();
    *p=5;
    cout << *p << endl;
    p.reset();
    return 0;
}

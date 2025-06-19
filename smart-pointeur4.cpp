#include <iostream>
#include <memory>
using namespace std;

int main() {
 unique_ptr<int[]>t (new int[5]);
 for (int i = 0; i < 5; i++) {
  t[i] =i *10 ;
 }
  for (int i = 0; i < 5; i++) {
   cout << t[i] << endl;
  }
 t.reset();
 return 0;
}

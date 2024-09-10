#include <iostream>
using namespace std;

class base {
  mutable int a;

public:
  base(int x) : a{x} { std::cout << ": base class Constructor" << endl; }

  void setVal(int x) { a = x; }
  int getVal() const {
    a = 40;
    return a;
  }
};

int main() {
  base obj(5);
  cout << "a: " << obj.getVal() << endl;
  obj.setVal(20);
  cout << "a: " << obj.getVal() << endl;
  return 0;
}

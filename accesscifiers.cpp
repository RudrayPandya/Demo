// accesscifiers.cpp
#include <iostream>
using namespace std;
class Tops {
    private:   // Private access specifier
    int y=10;   // Private attribute
  public:    // Public access specifier
    int x;   // Public attribute

    int test()
    {
       return y; 
    }
};

int main() {
  Tops test; 
  test.x = 25;  // Allowed (x is public)
  cout<<test.x<<"\n";
  // test.y=90;// Error 
  cout<<test.test();
  return 0;
}
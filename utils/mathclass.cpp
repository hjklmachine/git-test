#include <iostream>

using namespace std;

class Mathclass {
  int x; 
  int y;
  public:
    Mathclass(int x, int y){
      this->x = x;
      this->y = y;
    }

    int sum(){
      return x +y;
    }
};

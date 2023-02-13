#include <iostream>
#include "utils/mathclass.cpp"
#include "utils/database_handler.cpp"

using namespace std;
int main(){
  Mathclass mc(2,4);
  cout <<  mc.sum() << endl;

  Database_handler dh;
  dh.connect();

}

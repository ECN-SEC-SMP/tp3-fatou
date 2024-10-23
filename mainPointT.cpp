#include "carre.hpp"
#include "forme.hpp"
#include "pointT.hpp"
#include "rectangle.hpp"
#include <iostream>

using namespace std;


int main() {

  pointT<int> p1(1.0, 2.0);
  //pointT<int> p2(3.0, 4.0);

  pointT<string> p2("hello", "world");
  p2.translater("test_x", "test_y"); // test spécialisation
  cout << p2;
  

  // cout<<p1<<endl; //test surcharge opérateur <<
  //  cout<<p1.norm2()<<endl;
  //  cout<<p2.norm2()<<endl;

  // test forme

  // test rectangle
  // Rectangle<int, int> R(p1, 2, 3);
  // cout << R << endl;

  // Carre<int,int> C(p2,2);
  // cout<<C<<endl;
  // cout<<C.surface()<<endl;

  return 0;
}

#include <iostream>
#include "pointT.hpp"

using namespace std;

int main(){

    pointT<double> p1(1.0, 2.0);
    pointT<int> p2(2,2);

    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    cout<<p1.norm2()<<endl;
    cout<<p2.norm2()<<endl;

    return 0;
}

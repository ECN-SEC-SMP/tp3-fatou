
#include <iostream>
using namespace std;

template <typename T>
T maximumTemplate(const T& a,const T& b)
{
   if(a>b)
      return a;
   else
      return b;
}

int main()
{
     double pi(3.14);
     double e(2.71);

     cout << maximumTemplate<double>(pi,e) << endl; //Utilise la "version double"de la fonction

     int cave(-1);
     int dernierEtage(12);

     cout << maximumTemplate<int>(cave,dernierEtage) << endl; //Utilise la "version int" de la fonction

     unsigned int a(43);
     unsigned int b(87);

     cout << maximumTemplate<unsigned int>(a,b) << endl; //Utilise la "version unsigned int" de la fonction.

     return 0;
}

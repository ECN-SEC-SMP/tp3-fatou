#ifndef carre_hpp
#define carre_hpp

#include <iostream>
#include "pointT.hpp"
#include "forme.hpp"
#include "rectangle.hpp"

template<typename T, typename S>
class Carre;

template<typename T, typename S>  //,  typename S
std::ostream& operator<< (std::ostream &, Carre <T,S> const&);

template<typename T, typename S>
class Carre : public Rectangle<T,S>  {
private:

    T cote;

public:

    Carre(pointT<T> p, T cote);
    S perimetre();
    S surface();
    friend std::ostream& operator<< <T,S>(std::ostream &, Carre const&);


};


template<typename T, typename S>
Carre<T,S>::Carre(pointT<T> p, T cote):Rectangle<T,S> (p, cote, cote) {}

template<typename T, typename S>
S Carre<T,S>::perimetre(){
    return 4*this->getLargeur();
}

template<typename T, typename S>
S Carre<T,S>::surface(){
    return this->getLargeur() * this->getLargeur();
}

template <typename T, typename S>
ostream& operator<<(ostream &s, Carre<T,S>  &F)

{
   s <<"C'est un carré de coté: "<< F.getLargeur () << " et de perimètre: "  << F.perimetre() << std::endl;

  return s;

}

#endif
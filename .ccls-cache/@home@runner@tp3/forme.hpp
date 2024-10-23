#ifndef forme_hpp
#define forme_hpp

#include <iostream>
#include "pointT.hpp"

using namespace std; 

template<typename T, typename S>
class forme;

template<typename T, typename S>  //,  typename S
std::ostream& operator<< (std::ostream &, forme<T,S> const&);

////////////////////classe forme////////////////////////////////////

template<typename T, typename S>
class forme{

protected:

    pointT<T> p;

public:
 
    forme(pointT<T> p);
    pointT<T>getP() const;
    void setP(pointT<T> p);
    virtual S perimetre()=0; // à mettre en générique
    virtual S surface()=0; // à mettre en générique
    friend std::ostream& operator<< <T,S>(std::ostream &, forme const&);
};

template<typename T, typename S>
forme<T,S>::forme(pointT<T> p){
    this->p = p;
}


template<typename T, typename S>
pointT<T> forme<T,S>::getP() const{
    return this->p;
}

template<typename T, typename S>
void forme<T, S>::setP(pointT<T> p) {  // Correction du type du paramètre
    this->p = p;
}

template <typename T, typename S>
ostream& operator<<(ostream &s, forme<T,S> const &F)

{
   s<<"C'est une forme de centre "<<F.getP()<<std::endl;
  return s;
}


#endif
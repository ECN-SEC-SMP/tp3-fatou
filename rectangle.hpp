#ifndef rectangle_hpp
#define rectangle_hpp

#include <iostream>
#include "pointT.hpp"
#include "forme.hpp"


using namespace std;

template<typename T, typename S>
class Rectangle;

template<typename T, typename S>  //,  typename S
std::ostream& operator<< (std::ostream &, Rectangle<T,S> const&);


template<typename T, typename S>
class Rectangle : public forme<T,S>
{
private:

    T largeur;
    T hauteur;

public:

    Rectangle(pointT<T> p, T largeur, T hauteur);

    T getLargeur() const;
    void setLargeur(T largeur);
    T getHauteur() const;  
    void setHauteur(T hauteur);
    S perimetre();
    S surface();

    friend std::ostream& operator<< <T,S>(std::ostream &, Rectangle const&);


};

template<typename T, typename S>
Rectangle<T, S>::Rectangle(pointT<T> p, T largeur, T hauteur): forme<T,S> (p), largeur(largeur), hauteur(hauteur) {}

template<typename T, typename S>
T Rectangle<T,S>::getLargeur() const{
    return this->largeur;
}

template<typename T, typename S>
void Rectangle<T,S>::setLargeur(T largeur){
    this->largeur = largeur;
}


template<typename T, typename S>
T Rectangle<T,S>::getHauteur() const{
    return this->hauteur;
}

template<typename T, typename S>
void Rectangle<T,S>::setHauteur(T hauteur){
    this->hauteur = hauteur;
}

template<typename T, typename S>
S Rectangle<T,S>::perimetre(){
    return 2*(this->largeur+this->hauteur);
}

template<typename T, typename S>
S Rectangle<T,S>::surface(){
    return this->largeur*this->hauteur;
}

template <typename T, typename S>
ostream& operator<<(ostream &s, Rectangle<T,S>  &F)

{
   s <<"C'est un rectangle de largeur: "<< F.getLargeur() << " et de longueur: "  << F.getHauteur() << std::endl;

  return s;
    
}




#endif
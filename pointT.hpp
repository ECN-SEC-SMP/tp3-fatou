#ifndef pointT_hpp
#define pointT_hpp

#include <iostream>

using namespace std;

template <typename T>
class pointT;

template <typename T>
std::ostream& operator<<(std::ostream &, pointT<T> const&);



template<typename T> 
class pointT {
protected:
    T x;
    T y;
public:
    pointT(T x,T y);
    pointT();
    void translater(T x,T y);
    T getX() const;
    void setX(T x);
    T getY() const;
    void setY(T x);
    T norm2() const;
    T getP() const;
    void setP(T x);
    pointT(const pointT &p);

    friend std::ostream& operator<< <T>(std::ostream &, pointT const&);
    

};

template<typename T> 
pointT<T>::pointT(T x,T y){
    this->x = x;
    this->y = y;
 }

template<typename T> 
pointT<T>::pointT(){
    this->x = T();
    this->y = T();
 }

template<typename T>
pointT<T>::pointT(const pointT &p){
    this->x = p.getX();
    this->y = p.getY();
}

template<typename T> 
 T pointT<T>::getX() const{
    return this->x;
 }

template<typename T> 
void pointT<T>::setX(T x){
    this->x = x;
 }

template<typename T> 
T pointT<T>::getY() const{
    return this->y;
 }

template<typename T> 
void pointT<T>::setY(T y){
    this->y = y;
}

template<typename T>
T pointT<T>::norm2() const{
   return x*x+y*y;
}

template<typename T>
void pointT<T>::translater(T x,T y){
    this->x += x;
    this->y += y;    
}

////////////////////specialisation/////////////////////

template< >
void pointT<string>::translater(string dx, string dy) {
    // Utilisation de la fonction std::swap pour échanger les valeurs
    std::swap(x, dx);
    std::swap(y, dy);
}



template <typename T>
ostream& operator<<(ostream &o, pointT<T> const &P)
{
   o<<"("<<P.getX()<<","<<P.getY()<<")"<<std::endl;

  return o;
}

#endif
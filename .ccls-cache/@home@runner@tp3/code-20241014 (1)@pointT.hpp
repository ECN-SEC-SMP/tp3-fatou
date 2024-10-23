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
    pointT(const Point &p);
    friend ostream& operator<<(ostream& s,pointT const& p);
    

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
pointT<T>::pointT(const Point &p){
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

ostream& operator<<(ostream& s,pointT const& p);

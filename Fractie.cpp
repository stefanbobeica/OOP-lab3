#include "Fractie.h"
  using namespace  std;

Fractie::Fractie(int aa, int bb) {
    a=aa;
    b=bb;
}
Fractie::~Fractie() {
//nu am nimic alocat dinamic
}

Fractie::Fractie(const Fractie &obj) {
    a = obj.a;
    b = obj.b;
}
double  Fractie::getValoare() {
    return  (double)a/b;
}
Fractie Fractie::getInv() {
    Fractie temp;
    temp.b = this->a;
    temp.a = this->b;
   return temp;
}
void Fractie::setdata(int a, int b) {
    this->a = a;
    this->b = b;
}
float Fractie::getA() {
    return (float)a;
}
float Fractie::getB() {
    return (float)b;
}
Fractie& Fractie::operator=(const Fractie &obj) {
    a = obj.a;
    b = obj.b;
    return *this;
}

Fractie operator+( const Fractie& obj1, const Fractie& obj2){
    Fractie temp;
        temp.a=(obj1.a*obj2.b)+(obj2.a*obj1.b);
        temp.b=obj1.b*obj2.b;
     return temp;
}
Fractie operator-(const Fractie& obj1,const Fractie& obj2 ){
    Fractie temp;
        temp.a=(obj1.a*obj2.b)-(obj2.a * obj1.b);
        temp.b=obj1.b*obj2.b;
        return temp;
}
Fractie operator * (const Fractie& obj1, const Fractie& obj2 ){
    Fractie temp;
    temp.a=obj1.a*obj2.a;
    temp.b=obj1.b*obj2.b;
    return temp;
}
Fractie operator / (const Fractie& obj1, const Fractie& obj2){
    Fractie temp;
    temp.a=obj1.a*obj2.b;
    temp.b=obj1.b*obj2.a;
    return temp;
}
Fractie operator -(const Fractie& obj){
    Fractie temp(obj);
       temp.a = (-1)*temp.a;
       return temp;
}
Fractie& Fractie::operator +=( const Fractie& a){
    *this = *this + a;
    return *this;
}
Fractie& Fractie::operator -=( const Fractie& a){
    *this = *this - a;
    return *this;
}

Fractie& Fractie::operator *=( const Fractie& a){
    *this = *this * a;
    return *this;
}
Fractie& Fractie::operator /=( const Fractie& a){
    *this = *this / a;
    return *this;
}
 bool Fractie::operator==(const Fractie & obj){
 return( (a/b)==(obj.a/obj.b));
}
bool Fractie::operator!=(const Fractie & obj){
    return( (a/b)!=(obj.a/obj.b));
}
bool Fractie::operator<(const Fractie & obj){
    return( (a/b)<(obj.a/obj.b));
}
bool Fractie::operator>=(const Fractie & obj){
    return( (a/b)>=(obj.a/obj.b));
}

bool Fractie::operator>(const Fractie & obj){
    return( (a/b)>(obj.a/obj.b));
}
bool Fractie::operator<=(const Fractie & obj){
    return( (a/b)<=(obj.a/obj.b));
}

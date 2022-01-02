#include "Fractie.h"
using namespace  std;
int main() {
    Fractie x(3,2);
    cout<<"Valoarea: "<<x.getValoare()<<endl;
    Fractie aux(x);
    cout<<endl;
    cout<<"Valoarea aux dupa utilizarea constructorului de copiere: "<<aux.getValoare()<<endl;
    aux.setdata(2,1);
    cout<<endl;
    cout<<"Valoarea dupa utilizarea metodei setdata "<<aux.getValoare()<<endl;
    cout<<endl;
    cout<<"Utilizarea getA si getB  pe var aux"<<aux.getA()<<" "<<aux.getB();
    cout<<endl;
    aux = x;
    Fractie a(1,2), b(3,2);
    a=b;
    cout<<"Testare operator  =:(ar trebui sa fie 1,5) : "<<a.getValoare()<<endl;

    cout<<"Utilizare operator = , aux = x "<<aux.getValoare();
    x+=aux;
    cout<<endl;
    cout<<"Utilizare operator  += si + (+= utilizeaza +): "<<x.getValoare();
    cout<<endl<<"x= "<<x.getValoare()<<endl<<"aux= " <<aux.getValoare();
    x-=aux;
    cout<<endl;
    cout<<"Utilizare -= si - (-= utilizeaza -): "<<x.getValoare();
    cout<<endl;
    x*=aux;
    cout<<"Utilizarea *= si * (*= utilizeaza *): "<<x.getValoare();
    cout<<endl;
    aux.setdata(1,2);
    x/=aux;
    cout<<"Utilizarea /= si / (/= utilizeaza /): "<<x.getValoare();
    x.setdata(1,2);
    cout<<endl;
    cout<<"x si aux sunt egale, voi testa operatorii de tip bool in continuare:"<<endl;
    if(x==aux){
        cout<<"== functioneaza"<<endl;
    }
    if(x!=aux){
        cout<<"!=  nu functioneaza"<<endl;
    }
    else cout<<"!= functioneaza"<<endl;
    if(x<aux){
        cout<<"<  nu functioneaza"<<endl;
    }
    else cout<<"< functioneaza"<<endl;

    if(x>=aux){
        cout<<">=  functioneaza"<<endl;
    }
    else cout<<">= nu  functioneaza"<<endl;

    if(x>aux){
        cout<<"> nu functioneaza"<<endl;
    }
    else cout<<"> functioneaza"<<endl;

    if(x<=aux){
        cout<<"<=  functioneaza"<<endl;
    }
    else cout<<"<= nu functioneaza"<<endl;
    return 0;
}

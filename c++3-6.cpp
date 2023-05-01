#include<iostream>
using namespace std;
class SimpleCat{
    string name;//char *,char[]
public:
    SimpleCat(string name) {cout<<"New "<<this->(name=name)<<endl;}
    SimpleCat(const SimpleCat&rCat ){cout<<"Copy"<<(name=rCat.name)<<endl;}
    ~SimpleCat(){cout<<"Del"<<name<<endl;}
};
SimpleCat& f1(SimpleCat &psc){return psc;}
int main(){
    SimpleCat sc("Frisky");//new
    SimpleCat* psc = new SimpleCat("Tom");//new
    SimpleCat& rsc = *new SimpleCat("Tom's friend");//new
    SimpleCat sc2 = sc;//copy
    SimpleCat sc3(rsc);//copy
    SimpleCat sc4=f1(sc);

    delete psc;
    delete &rsc;
}

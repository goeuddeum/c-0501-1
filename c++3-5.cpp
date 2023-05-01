#include<iostream>
using namespace std;
class SimpleCat{
public:
    SimpleCat() {cout<<"New"<<endl;}
    SimpleCat(const SimpleCat& ){cout<<"Copy"<<endl;}
    ~SimpleCat(){cout<<"Del"<<endl;}
};
int main(){
    SimpleCat sc;//new
    SimpleCat* psc = new SimpleCat();//new
    SimpleCat& rsc = *new SimpleCat();//new
    SimpleCat sc2 = sc;//copy
    SimpleCat sc3(sc);//copy

    delete psc;
    delete &rsc;
}

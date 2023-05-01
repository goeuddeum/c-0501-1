#include<iostream>
using namespace std;
#if 0
class SimpleCat
{
    public:
    SimpleCat(int age, int weight);
    ~SimpleCat(){}
    int GetAge(){return itsAge;}
    int GetWeight(){return itsWeight;}
private:
int itsAge;
int itsWeight;
};
SimpleCat::SimpleCat(int age, int weight):
itsAge(age),itsWeight(weight){}

SimpleCat&TheFunction();
int main()
{
    SimpleCat&rCat=TheFunction();
    int age= rCat.GetAge();
    cout<<"rCat is"<<age<<"years old!\n";
    return 0;
}
SimpleCat&TheFunction()
{
    SimpleCat Frisky(5,9);
    return Frisky;
}
#endif
#if 0
class SimpleCat
{
    public:
    SimpleCat(int age, int weight);
    ~SimpleCat(){}
    int GetAge(){return itsAge;}
    int GetWeight(){return itsWeight;}
private:
int itsAge;
int itsWeight;
};
SimpleCat::SimpleCat(int age, int weight):
itsAge(age),itsWeight(weight){}

SimpleCat&TheFunction();
int main()
{
    SimpleCat&rCat=TheFunction();
    int age= rCat.GetAge();
    cout<<"rCat is"<<age<<"years old!\n";
    cout<<"&rCat:"<<&rCat<<endl;
    //How do you get rid of that memory?
    SimpleCat*pCat=&rCat;
    delete pCat;
    //Uh oh,rCat now refers to??
    return 0;
}
SimpleCat &TheFunction()
{
    SimpleCat*pFrisky=
    new SimpleCat(5,9);
    cout<<"pFrisky:"<<pFrisky<<endl;
    return*pFrisky;
}
#endif
#if 0
itn main(){
    int i=3;
    int j=(4);F
    
    cout << i <<endl;
    cout << j <<endl;
}
#endif 
#if 0 
class Cat{}
int main() {
    Cat c1;
    Cat c2;
    Cat c3;
    c3=c1+c2;
}
    //+,-,*,/,%';'
    //>=<
#endif
#if 0
class Int{
    int value;
    public:
    Int(): value{0}{}
    Int(int num):value(num){}
    Int(const Int& Num):value(Num.value){}
    int getVakue(){return value;}
    Int operator+(const Int& j)const{
        Int tmp(this->value+j.value);
        return tmp;}
    const Int& operator+=(const Int& j){
        this->value +=j.value,
    return *this
}
    int main(){
        Int i;
        cout<<i.getVakue()<<endl;
        Int j = 3;//Int j(3)
        cout<<j.getVakue()<<endl;
        Int k =j;//Int k(j)
        cout<<k.getVakue()<<endl;
        k=i+j;//i.operrator+(j);//i+j;
        cout<<k.getVakue()<<endl;
        k=i.ADD(j);
        cout<<k.getVakue()<<endl;
        i+=j;/i+i=j,i.operator+=(j)
        cout<<i.getvalue()<<endl;
        int a=3;
        int b=4;
        int c=0;
        cout<<c<<endl;
}
#endif
#if 0
class CAT
{
    public:
    CAT()
    {itsAge=1;itsWeight=5;}
    ~CAT() {}
    int GetAge()const
    {return itsAge;}
    int  GetWeight()const
    {return itsWeight;}
    void SetAge(int age)
    {itsAge=age;}
    private:
    int itsAge;
    int itsWeight;
};
int main()
{
    CAT Litter[5];
    int i;
    for(i=0;i<5;i++)
    Litter[i].SetAge(2*i +1);
    for(i=0;i<5;i++)
    {
        cout<<"Cat#"<<i+1<<": ";
        cout<<Litter[i].GetAge()
        <<endl;
    }
    return 0;
}
#endif
#if 0
class Cat{};                                               
int main(){
    int* ip=new int(3);
    cout<<*ip<<endl;
    delete i;
    int& ir=*new int(5);
    cout<<ir<<endl;
    delete &ir;
    int* ip2=new int [5]{1,2,3,4,5};
    cout <<ip2[3]<<endl;
    delete [] ip2;
    Cat& rc=*new Cat;
    delete &rc;
    Cat* pc=new Cat;
    delete pc;
    Cat* pca=new Cat[5];
    delete []pca;    
}
#endif
#if 0
class CAT
{
    public:
    CAT()
    {itsAge=1;itsWeight=5;}
    ~CAT() {}
    int GetAge()const
    {return itsAge;}
    int  GetWeight()const
    {return itsWeight;}
    void SetAge(int age)
    {itsAge=age;}
    private:
    int itsAge;
    int itsWeight;
};
int main()
{
    CAT*Family[500];
    int i;
    CAT *pCat;
    for(i=0;i<500;i++)
    {
        pCat=new CAT;
        pCat->SetAge(2*i +1);
        Family[i]=pCat;
    }
    for(i=0;i<500;i++)
    {
        cout<<"Cat#"<<i+1<<": ";
        cout<<Family[i]->GetAge()<<
        endl;
    }
    return 0;
}
#endif
#if 0
class CAT
{
    public:
    CAT()
    {itsAge=1;itsWeight=5;}
    ~CAT();
    int GetAge()const
    {return itsAge;}
    int  GetWeight()const
    {return itsWeight;}
    void SetAge(int age)
    {itsAge=age;}
    private:
    int itsAge;
    int itsWeight;
};
CAT::~CAT()
{
    //cout<<"Destructor called!\n";
}
int main()
{
    CAT*Family=new CAT[500];
    int i;
    CAT *pCat;
    for(i=0;i<500;i++)
    {
        pCat=new CAT;
        pCat->SetAge(2*i +1);
        Family[i]=*pCat;
        delete pCat;
    }
    for(i=0;i<500;i++)
    {
        cout<<"Cat#"<<i+1<<": ";
        cout<<Family[i].GetAge()<<
        endl;
    }
    delete[]Family;
    return 0;
}
#endif
#include<iostream>
using namespace std;
class Computer{
    string CPU;//i5=1235u (1.3GHZ)
    int Memory;//16GB
    int Disk;//256GB
public:
    Computer(string CPU,int Memory,int Disk):
    CPU(CPU),Memory(Memory),Disk(Disk){}
    string getCPU()const {return CPU;}
    int getMemory()const {return Memory;}
    int getDisk()const {return Disk;}
};
class LapTop : public Computer{
    string LTKeyboard;//Laptop Keyboard
    string LTMonitor;//Laptop Monitor
    string LTTouch;//Laptop Touch
public:
    LapTop(string CPU,int Memory,int Disk,
        string LTKeyboard,string LTMonitor,string LTTouch):
        Computer(CPU,Memory,Disk),LTKeyboard(LTKeyboard),
        LTMonitor(LTMonitor),LTTouch(LTTouch){}
    string getKeyboard() const {return LTKeyboard;}
    string getMonitor() const {return LTMonitor;}
    string getTouch() const {return LTTouch;}
};
int main(){
    Computer& myCom= 
    *new Computer("i5-1235u(1.3GHz)",16,256);
    cout<<myCom.getCPU()<<","<<myCom.getMemory()<<","<<myCom.getDisk()<<","<<endl;
    cout<<"sizeof(myCom):"<<sizeof(myCom)<<endl;
    
    delete &myCom;
    cout<<sizeof(LapTop)<<endl;
    LapTop& myLapTop=*new LapTop("i9-13900HX (2.2GHZ)",16,512,
    "LTKB","LTMon","LTTouch");
    cout<<myLapTop.getCPU()<<","<<myLapTop.getMemory()<<","<<
    myLapTop.getDisk()<<endl;
    cout<<myLapTop.getKeyboard()<<","<<myLapTop.getMonitor()<<","<<myLapTop.getTouch()<<endl;
}
    /*
class DeskTop :public Computer {
    string EXMouse;//Desktop Mouse
    string EXMonitor;//Desktop Monitor
    string ExKeyboard;//Desktop Keyboard
};*/
#include <iostream>
using namespace std;
#if 0
enum BREED {YORKIE,CAIRN,DANDIE,SHETLAND,DOBERMAN,LAB};
class Mammal
{
    public:
    //constructors
    Mammal();
    Mammal(int age);
    ~Mammal();
    //accessors
    int GetAge() const{return itsAge;}
    void SetAge(int age) {itsAge=age;}
    int GetWeight()const{return itsWeight;}
    void SetWeight(int weight){itsWeight = weight;}
    //Other methods
    void Speak() const {cout << "Mammal sound!\n";}
    void Sleep() const {cout << "shhh. I'm sleeping.\n";}
    protected:
    int itsAge;
    int itsWeight;
};
#endif
#if 0
//기본(base)클래스, 파생(derived)클래스
//상속 : public(0), protected(사용잘 x), private(사용잘x)
//protected : 상속에서 사용
class Mammal {
protected:
    int itsAge;
    //void getAge(){itsAge;}
};
class Dog : public Mammal {//public 상속
    void getAge(){itsAge;}
};
int main(){
    Mammal m;
    //m.itsAge;
}
#endif
#if 0
class Dog : public Mammal {
public:
    //Constructors
    Dog(){ cout<<"Dog constructor...\n";}
    ~Dog(){cout<<"Dog destructor...\n";}
    //other methods
    void WagTail(){cout <<"Tail wagging...\n";}
    void BegForFodd(){cout<<"Begging for godd...\n";}
    void Speak()const{cout<<"Woof!\n";}
private: 
    BREED itsBreed;
};
int main()
{
    Mammal bigAnimal;
    Dog fido;
    bigAnimal.Speak();
    fido.Speak();
    return 0;
}
#endif
#if 0
class Mammal{
    public:
    void Move()const {cout<<"Mammal move one step\n";}
    void Move(int distance) const
    {
        cout<<"Mammal move";
        cout<<distance<<"_steps.\n";
    }
    protected:
    int itsAge;
    int itsWeight;
};
class Dog:public Mammal
{
    public:
    //you may receive a warning that you are hiding a function!
    void Move() const { cout << "Dog move 5 steps.\n";}
};
#endif
#if 0
class USB {// interface
public:
    virtual void connect()=0;
    virtual void read()=0;
};
class USBDisk : public USB {
public: 
    virtual void connect(){cout<<"USB Disk 연결"<<endl;}
    virtual void read(){cout<<"USB Disk 읽기"<<endl;}
};
class USBMouse : public USB {
public: 
    virtual void connect(){cout<<"USB Mouse 연결"<<endl;}    
    virtual void read(){cout<<"USB Mouse 읽기"<<endl;}
};
class DeskTop {
    USB* usb0;
public: DeskTop() {}
    void connect(USB& rUsb) {
        usb0=&rUsb;
        usb0->connect();
        usb0->read();
    }
};
class USBWifi : public USB {
public: 
    virtual void connect(){cout<<"USB Wifi 연결"<<endl;}        
    virtual void read(){cout<<"USB Wifi 읽기"<<endl;}
};
int main() {
    DeskTop& myDeskTop = *new DeskTop();
    USBDisk& myUSBDisk = *new USBDisk();
    myDeskTop.connect(myUSBDisk);
    USBMouse& myUSBMouse = *new USBMouse();
    myDeskTop.connect(myUSBMouse);
    USBWifi& myUSBWifi = *new USBWifi();
    myDeskTop.connect(myUSBWifi);
    delete &myUSBDisk;
    delete &myDeskTop;
}
#endif
#if 0
class Dog : public Mammal
{
public:
    Dog(){cout<<"Dog Constructor...\n";}
    ~Dog(){cout<<"Dog destructor..\n";}
    void WagTail(){cout<<"Wagging Tail...\n";}
    void Speak()const{cout<<"Woof!\n";}
    void Move()const{cout<<"Dog moves 5 steps...\n";}
};
int main()
{
    Mammal *pDog=new Dog;
    pDog->Move();
    pDog->Speak();
    return 0;
}
#endif
#if 0
class Mammal
{
public:
    Mammal():itsAge(1){}
    ~Mammal(){}
    virtual void Speak()const{cout<<"Mammal speak!\n";}
protected:
    int itsAge;
};
class Dog:public Mammal
{
public:
void Speak()const{cout<<"Woof!\n";}
};
class cat:public Mammal
{
public:
void Speak()const{cout<<"Meow!\n";}
};
class Horse:public Mammal
{
public:
void Speak()const{cout<<"Winnie!\n";}
};
class Pig:public Mammal
{
public:
void Speak()const{cout<<"Oink!\n";}
};
#endif
#if 0
enum TYPE{HORSE,PEGASUS};
class Horse
{
public:
    virtual void Gallop(){cout<<"Galloping...\n";}
private:
    int itsAge;
};
class Pegasus:public Horse
{
public:
virtual void Fly(){cout<<"I can Fly! I can fly! I can fly!\n";}
};
const int NumberHorses=5;
int main()
{
    Horse*Ranch [NumberHorses];
    Horse*pHorse;
    int choice,i;
    for(i=0;i<NumberHorses;i++)
    {
        cout<<"(1)Horse(2)Peasus:";
        cin>>choice;
        if(choice ==2)
            pHorse=new Pegasus;
        else
            pHorse = new Horse;
        Ranch[i]=pHorse;
    }
    cout<<"\n";
    for(i=0;i<NumberHorses;i++)
    {
        Pegasus*pPeg=dynamic_cast<Pegasus*>(Ranch[i]);
        if(pPeg)
            pPeg->Fly();
        else
            cout<<"Just a horse\n";
        delete Ranch[i];
    }
    return 0;
}
#endif
#if 0
class Horse
{
public:
    Horse(){cout<<"Horse constructor...";}
    virtual~Horse(){cout<<"Horse destructor...";}
    virtual void Whinny()const{cout<<"Whinny!...";}
private:
int itsAge;
};
class Bird
{
public:
    Bird(){cout<<"Bird constructor...";}
    virtual~Bird(){cout<<"Bird destructor...";}
    virtual void Chirp()const{cout<<"Chirp...";}
    virtual void Fly() const
    {
        cout<<"I can fly!I can fly!I can fly";
    }
private:
    int itsWeight;
};
class Pegasus:public Horse,public Bird
{
public:
    void Chirp()const{Whinny();}
    Pegasus(){cout<<"Pegasus constructor...";}
    ~Pegasus(){cout<<"Pegasus destructor...";}
};
const int MagicNumber=2;
int main()
{
    Horse*Ranch[MagicNumber];
    Bird*Aviary[MagicNumber];
    Horse*pHorse;
    Bird*pBird;
    int choice,i;
    for(i=0;i<MagicNumber;i++)
    {
        cout<<"\n(1)Horse (2)Pegasus:";
        cin>>choice;
        if(choice==2)
            pHorse=new Pegasus;
        else
            pHorse=new Horse;
            Ranch[i]=pHorse;
    }
    for(i=0;i<MagicNumber;i++)
    {
        cout<<"\n(1)Bird(2)Pegasus:";
        cin>>choice;
        if(choice==2)
            pBird=new Pegasus;
        else
            pBird=new Bird;
        Aviary[i]=pBird;
    }
    cout<<"\n";
    for(i=0;i<MagicNumber;i++)
    {
        cout<<"\nRanch[<<i<<}:";
        Ranch[i]->Whinny();
        delete Ranch[i];
    }
    for(i=0;i<MagicNumber;i++)
    {
        cout<<"\nAviary["<<i<<"]:";
        Aviary[i]->Chirp();
        Aviary[i]->Fly();
        delete Aviary[i];
    }
    return 0;
}
#endif
#if 0
enum BOOL{FALSE,TRUE};
class Shape
{
    public:
    Shape(){}
    ~Shape(){}
    virtual long GetArea()=0;//error
    virtual long GetPerim()=0;
    virtual void Draw()=0;
private:
};
void Shape::Draw()
{
    cout<<"Abstract drawing mechanism!\n";
}
class Circle : public Shape
{
public:
        Circle(int radius):itsRadius(radius){}
        ~Circle(){}
        long GetArea(){return 3*itsRadius*itsRadius;}
        long GetPerim(){return 9*itsRadius;}
        void Draw();
private:
    int itsRadius;
    int itsCircumference;
};
void Circle::Draw()
{
    cout<<"Circle drawing routine here!\n";
    Shape::Draw();
}
class Rectangle:public Shape
{
public:
    Rectangle(int len,int width):
    itsLength(len),itsWidth(width){}
    ~Rectangle(){}
    long GetArea(){return itsLength*itsWidth;}
    long GetPerim(){return 2* itsLength + 2*itsWidth;}
    virtual int GetLength(){return itsLength;}
    virtual int GetWidth(){return itsWidth;}
    void Draw();
private:
    int itsWidth;
    int itsLength;
};
void Rectangle::Draw()
{
    for(int i =0;i<itsLength;i++)
    {
        for(int j =0;j<itsWidth;j++)
                    cout<<"x";
        cout<<"\n";
    }
    Shape::Draw();
}
class Square:public Rectangle
{
    public:
    Square(int len);
    Square(int len,int width);
    ~Square(){}
    long GetPerim(){return 4*GetLength();}
};
Square::Square(int len):
Rectangle(len,len)
{}
Square::Square(int len,int width):
Rectangle(len,width)
{
    if(GetLength()!= GetWidth())
    cout<<"Error,not a square...aRectangle??\n";
}
int main()
{
    int choice;
    BOOL fQuit=FALSE;
    Shape*sp;
    while(1)
    {
        cout<<"(1)Circle(2)Rectangle(3)Square(0)Quit:";
        cin>>choice;
        switch(choice)
        {
        case 1: sp=new Circle(5);
        break;
        case 2 : sp=new Rectangle(4,6);
        break;
        case 3: sp=new Square(5);
        break;
        default:fQuit=TRUE;
        break;
        }
        if(fQuit)
        break;
        sp->Draw();
        cout<<"\n";
    }
    return 0;
}
#endif
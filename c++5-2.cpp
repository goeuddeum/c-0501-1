#include <iostream>
using namespace std;
//1
#if 0
class Weapon{
public:
    virtual void attack()=0;    
};
class Character{
    int x;
    Weapon* weapon;
public:
    Character(int x):x(x),weapon(NULL){}
    void move(){x++;}
    int getX() const{return x;}
    void attack(){weapon->attack();}
    void setWeapon(Weapon& weapon){this->weapon=&weapon;}
};
void move(Character&c){c.move();}//***
class Sword:public Weapon {
public:
    virtual void attack(){cout<<"Attack with Sword"<<endl;} 
};
typedef struct{
    int data[10000];//40KB
} BigData;
void sendWiFi(const BigData*pBD){cout<<pBD->data[0]<<endl;}
void f1(int* ia) { cout << ia[1] << endl; }
void f2(int(*iaa)[3]) { cout << iaa[1][2] << endl; }
void f3(int** ipa) { cout << ipa[2][2] << endl; }
int main(){
    //1객체->함수->참조자
    Character&c=*new Character(0);
    cout<<c.getX()<<endl;
    move(c);
    cout<<c.getX()<<endl;
//2.다형성:순수가상클래스->상속->파생클래스
    Weapon&weapon=*new Sword();
    c.setWeapon(weapon);
    c.attack();
//3 구조체주소->함수->구조체포인터 
    BigData*pBD=(BigData*)malloc(sizeof(BigData)*1);
    //pBD[0].data[0]=42;
    pBD->data[0]=42;
    sendWiFi(pBD);
//4 일차배열->함수->구조체포인터
    int ia[5]={1,2,3,4,5};
    f1(ia); //ia[5];;rnt;
//5 이차배열->함수->구조체포인터
int iaa[2][3]={{1,2,3,},{4,5,6}};
f2(iaa);//void2(int iaa[2][3];//int iaa[][3])
//6 포인터배열->함수->이차포인터
int ia2[3]={11,22,33};
int ia3[4]={111,222,333};
int*ipa[3]={ia,ia2,ia3};
f3(ipa);//void f3//int****ipa
    
}
#endif
#if 0
class Stack{
    int*stack;
    int size;
    int top;
public:
Stack(int size):size(size){
    stack=new int[size]{0};
    top=0;
}
~Stack(){ delete stack; }
void Push(int data){
    if(top<size){
        stack[top]=data;
        top++;
    }
    else{
        cout<<"Stack full!"<<endl;
    }
}
   void Show()const{
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<endl;
    }
   }
    int Pop(){
        if(top>0){
        top--;
        return stack[top];
    }
    else{
        cout<<"Stack Empty"<<endl;
        return -1;
    }
    }
};
int main(){
    Stack&stack=*new Stack(1024);
    for(int data=111;data<130;data++){
        stack.Push(data);
    }
    stack.Show();
    while(true){
        int data=stack.Pop();
        if(data==-1)break;
        cout<<data<<endl;
    }
}
#endif
class Vegetable{
public:
virtual string getName()=0;
};
class Carrot:public Vegetable {
    public:
    virtual string getName(){return "carrot";}
};
class Cabbage:public Vegetable {
    public:
    virtual string getName(){return "cabbage";}
};
class Rabbit{
    string name;
public:
    Rabbit(string name):name(name){}
    void run()const{cout<<name<<"runs"<<endl;}
    void sleep()const{cout<<name<<"sleeps"<<endl;}
    void eat(Vegetable&veg)const{cout<<name<<"eats "<<veg.getName()<<endl;}
};
int main(){
    Rabbit&rabbit =*new Rabbit("Judy ");
    rabbit.run();
    rabbit.sleep();
    Vegetable&carrot=*new Carrot();
    rabbit.eat(carrot);
    Vegetable&cabbage=*new Cabbage();
    rabbit.eat(cabbage);
}
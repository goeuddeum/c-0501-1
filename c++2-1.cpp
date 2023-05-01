#include <iostream>
using namespace std;
#if 0
class Rectange {
    int Length;
public: 
    Rectange(int len){Length=len;}
    int getLength() const {return Length;}
};
int main() {
    //Rectange* const pRect = new Rectange(3);
    Rectange& pRect = *new Rectange(3);
    //cout<<pRect->getLength()<<endl;
    cout<<pRect.getLength()<<endl;
    //pRect++;
    //cout<<(pRect+1)->getLength()<<endl;
    //cout<<pRect[1].getLength()<<endl;
}
#endif
#if 0
int main() {
    int* p = new int(3); cout<<p<<endl;
    p++; cout<<p<<endl;//증강
    p+1; cout<<p+1<<endl;//오프셋
    p;cout<<p<<endl;//주소값,p=p+1
    &p; cout<<&p<<endl;//값
    *p; cout<<*(p-1)<<endl;//접근연산,p[-1]
    //int& r=p;
    int i =4; cout <<1<<endl;
    int& r = i; cout<<r<<endl;
    r++; cout << i <<" "<< r<<endl;
    r+1; cout << i <<" "<< r<<endl;
    r; cout << i <<" "<< r<<endl;
    &r; cout << i <<" "<< r<<endl;
    //*r;
}
#endif
#if 0
int main() {
    int i+=3;
    int* p =&1;
    cout << &i<< ":"<<i<<endl;
    cout << &p << ":"<<p<<endl;
    cout << &1+1 << ":"<<*(&i+1)<<endl;
    #endif
#if 0
struct Student {
    int age;
};
int getAge(const Student& inst){return inst.age;}
void setAge(Student& inst,int newAge){inst.age=newAge;}
int main(void){
    Student s3= {24};
    cout<<getAge(s3)<<endl;//const Student& inst=s3
    setAge(s3,getAge(s3)+ 1);
    cout << getAge(s3) <<endl;
}
//배열은 *(주소변수)로 받고, 객체 하나는 &(주소상수)로 받는다.
#endif
#if 0
int main()
{
    int intOne;
    int &rSomeRef=intOne;
    
    intOne=5;
    cout<<"intOne:"<<intOne<<endl;
    cout<<"rSomeRef:"<<rSomeRef<<endl;
    
    rSomeRef=7;
    cout<<"intOne:"<<intOne<<endl;
    cout<<"rSomeRef:"<<rSomeRef<<endl;
    return 0;
}
#endif
#if 0
class Cat{
    int itsAge;
    const char* name;
    public:
    Cat(int initialAge,const char* name)
    {
        cout<<"Cat 데이터 생성"<<name<<endl;
        itsAge=initialAge;
        this->name=name;
    }
    ~Cat(){
        cout<<"Cat 데이터 해제"<<this->name<<endl;
    }
    int GetAge() {return itsAge;}
    void SetAge(int age){itsAge=age;}
    void Meow(){cout<<"Meow\n";}
};
Cat Tom(3,"Tom");//함수바깥,전역공간,데이터공간
int main(){
    Cat Frisky(5,"Frisky");//함수안쪽,지역공간,스택공간
    Cat* theCat=new Cat(7,"Tom's Friend");//힙공간
    delete theCat;
}
#endif
#if 0
struct Student{
    const char*name;
    int age;
};
const char * getName(Student* inst){return inst ->name;}
int getAge(Student*inst){return inst->age;}
void setAge(Student*inst, int newAge){
    inst -> age = newAge;
}
int main(void){
    Student s3 = {"Jane",24};
    cout<<getName(&s3)<<endl;
    cout<<getAge(&s3)<<endl;
    setAge(&s3,getAge(&s3)+1);
    cout<<getAge(&s3)<<endl;
}
#endif
#if 0
struct Student{
    int age;
};
int getAge(const Student*inst){return inst->age;}
void setAge(Student*inst, int newAge){
    inst -> age = newAge;
}
int main(void){
    Student s3 = {24};
    cout<<getAge(&s3)<<ednl;
    setAge(&s3,getAge(&s3))+1);
    cout<<getAge(&s3)<<endl;
}
#endif
#if 0
//const 함수의 정제 1
struct Student{
    int age;
    int getAge() const {return this->age;}
    void setAge(int newAge){this->age =newAge;}
};
int main(void){
    Student s3 = {24};
    cout<<s3.getAge()<<endl;
    s3.setAge(s3.getAge()+1);
    cout<<s3.getAge()<<endl;
}
#endif
#if 0
class Student{
    public:
    int age;
    int getAge()const{return this->age;}
    void setAge(int newAge){this->age =newAge;}
};
int main(void){
    Student s3 ={24};
    cout << s3.getAge()<<endl;
    s3.setAge(s3.getAge()+1);
    cout<<s3.getAge()<<endl;
}
#endif
#if 0
void print(const int* pOne){
    cout <<pOne[0]<< " "<<pOne[1]<<endl;//pOne[0]++;
}
void copy(int* pTwo,const int* pOne){//출력배열/입력배열
pTwo[0]=pOne[0];
pTwo[1]=pOne[1];
//pOne[1]++;
}
int main(void){
    int*pOne=new int [5];//&h[0]
    pOne[0]=1,pOne[1]=2;
    cout<<pOne[0]<<" "<<pOne[1]<< endl;
    print(pOne);
    cout<<pOne[0]<<" "<<
    pOne[1]<<endl;
    int*pTwo=new int [5];
    copy(pTwo,pOne);//pTwo<=pOne
    print(pTwo);print(pOne);
}
#endif
#if 0
class Rectange{
    int Length;
    public:
    Rectange(int len){Length=len;}int getLength() const{return Length;}
};
int main(){
    //Rectange* const pRect = new Rectange(3);
    Rectange&pRect =*new Rectange(3);
    //cout<<pRect->getLength()<<endl;
    cout<<pRect.getLength()<<endl;//pRect++;
    //cout<<(pRet+1)->getLength()<<endl;
    //cout<<pRect[1].getLength()<<endl;
}
#endif
#if 0
class Rectangle
{
public:
    Rectangle();
    ~Rectangle();
    void SetLength(int length){itsLength = length;}
    int GetLength() const {return itsLength;}
    void SetWidth(int width){itsWidth = width;}
    int GetWidth() const{return itsWidth;}
private:
    int itsLength;
    int itsWidth;
};
Rectangle::Rectangle():
itsWidth(5),
itsLength(10)
{}
Rectangle::~Rectangle()
{}
#endif

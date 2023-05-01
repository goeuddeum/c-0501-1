#include <iostream>
#include <math.h>

using namespace std;
#if 0
int add(int a, int b) {
   return a + b;
}
int main() {
   int a = 1, b = 2;
   int c = add(a, b);
   cout << c << endl;
}
#endif
#if 0
bool is_adult(int age) {
   return age >= 19;
}
int main(void) {
   int my_age = 17;
   cout << is_adult(my_age) << endl;
}
#endif
#if 0
// struct Student {
//    const char* name;
//    int age;
// };
class Student {
    public:
   const char* name;
   int age;
};
int main(void) {
   Student s2 = { "Brad", 21 };
   Student s3 = { "Jane", 24 };
   cout << s2.name << endl;
   cout << s2.age << endl;
   cout << s3.name << endl;
   cout << s3.age << endl;
}
#endif
#if 0
struct Student {
   const char* name;
   int age;
};
const char * getName(Student* inst) {return inst->name;}
int getAge(Student* inst) {return inst->age;}
void setAge(Student* inst, int newAge) {
    inst->age = newAge;
}
int main(void) {
   Student s3 = { "Jane", 24 };
   cout << getName(&s3) << endl;
   cout << getAge(&s3) << endl;
   setAge(&s3, getAge(&s3) + 1);
   cout << getAge(&s3) << endl;
}
#endif
#if 0
struct Student {
   const char* name;// 멤버 변수
   int age;
   const char * getName() {return this->name;} 
    int getAge() {return this->age;}// 멤버 함수
    void setAge(int newAge) {this->age = newAge;}
};
int main(void) {
   Student s3 = { "Jane", 24 };
   cout << s3.getName() << endl;
   cout << s3.getAge() << endl;
   s3.setAge(s3.getAge() + 1);
   cout << s3.getAge() << endl;
}
#endif
#if 0
class Student {
    public:
   const char* name;// 멤버 변수
   int age;
   const char * getName() {return this->name;} 
    int getAge() {return this->age;}// 멤버 함수
    void setAge(int newAge) {this->age = newAge;}
};
int main(void) {
   Student s3 = { "Jane", 24 };
   cout << s3.getName() << endl;
   cout << s3.getAge() << endl;
   s3.setAge(s3.getAge() + 1);
   cout << s3.getAge() << endl;
}
#endif
#if 0
class Student {
private:
   const char* name;// 멤버 변수
   int age;
public:
    void setName(const char* name) {this->name=name;}
   const char * getName() {return this->name;} 
    int getAge() {return this->age;}// 멤버 함수
    void setAge(int newAge) {this->age = newAge;}
};
int main(void) {
    Student s3;
    s3.setName("Jane");
    s3.setAge(24);
   cout << s3.getName() << endl;
   cout << s3.getAge() << endl;
   s3.setAge(s3.getAge() + 1);
   cout << s3.getAge() << endl;
}
#endif
#if 0
class Student {
private:
   const char* name;// 멤버 변수
   int age;
public:
    Student(const char* name, int age) {
        this->name = name;
        this->age = age;
    }
   const char * getName() {return this->name;} 
    int getAge() {return this->age;}// 멤버 함수
    void setAge(int newAge) {this->age = newAge;}
};
int main(void) {
    Student s3("Jane", 24);
   cout << s3.getName() << endl;
   cout << s3.getAge() << endl;
   s3.setAge(s3.getAge() + 1);
   cout << s3.getAge() << endl;
}
#endif
#if 0
int Add(int x, int y)
{ cout << "In Add(), received " << x << " and " << y << "\n";
return (x + y); 
}
int main()
{ cout << "I'm in main()!\n";
int a,b,c; cout << "Enter two numbers: ";
cin >> a; cin >> b;
cout << "\nCalling Add()\n";
c = Add(a,b);
cout << "\nBreak in main().\n";
cout << "c was set to " << c;
cout << "\n Exiting...\n\n";
return 0;
}
#endif
#if 0
int AreaCube(int length,int width = 25, int height = 1);
int main()
{
    int length = 100;
    int width = 50;
    int height = 2;
    int area;
    
    area =AreaCube(length,width,height);
    cout<<"First area equals:"<<area<<"\n";
    
    area=AreaCube(length,width);
    cout<<"Second area equals:"<<area<<"\n";
    
    area =AreaCube(length);
    cout<<"Third area equals:"<<area<<"\n";
    return 0;
}
int AreaCube(int length,int width, int height)
{
    return(length * width * height);
}
#endif
#if 0
int Double(int);
long Double(long);
float Double(float);
double Double(double);
int main()
{
    int myInt =6500;
    long myLong=65000;
    float myFloat = 6.5F;
    double myDouble =6.5e20;
    int doubledInt;
    long doubledLong;
    float doubledFloat;
    double doubledDouble;
    cout<<"myInt:"<<myInt<<"\n";
    cout<<"myLong:"<<myLong<<"\n";
    cout<<"myFloat:"<<myFloat<<"\n";
    cout<<"myDouble:"<<myDouble<<"\n";
    doubledInt=Double(myInt);
    doubledLong=Double(myLong);
    doubledFloat=Double(myFloat);
    doubledDouble=Double(myDouble);
    cout<<"doubledInt:"<<doubledInt<<"\n";
    cout<<"doubledLong:"<<doubledLong<<"\n";
    cout<<"doubledFloat:"<<doubledFloat<<"\n";
    cout<<"doubledDouble:"<<doubledDouble<<"\n";
    return 0;
}
int Double(int original)
{
    cout<<"In Double(int)\n";
    return 2 * original;
}
long Double(long original)
{
    cout<<"In Double(long)\n";
    return 2 * original;
}
float Double(float original)
{
    cout<<"In Double(float)\n";
    return 2 * original;
}
double Double(double original)
{
    cout<<"In Double(double)\n";
    return 2 * original;
}
#endif

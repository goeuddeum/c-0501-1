#include <iostream>
using namespace std;
typedef struct Computer {const char CPU[32];} Computer;
class AIComputer{public: const char CPU[32];};
void f1(int* ia){cout<<ia[0]++<<endl;}//*(iaa+0)배열받고,읽고쓰기
void f2(double (* daa)[3]){cout<<(daa[0][1]+=0.1)<<endl;}//*(daa[]+1)=>*(*(daa+0)+1)
void f3(const char** cpa){cout<<cpa[0]<<endl;}
void f4(Computer* pCom){cout<<pCom->CPU<<endl;}
void f5(Computer& rCom){cout<<rCom.CPU<<endl;}
void f6(AIComputer& rAICom){cout<<rAICom.CPU<<endl;}
int main(){
    //1.일차배열->함수->일차포인터
    int ia[5]={1,2,3,4,5};//배열만들기
    f1(ia);//배열넘기고
    //2.이차배열->함수->배열포인터
    double daa[2][3]={0.1,0.2,};
    f2(daa);
    //3.포인터배열->함수->이차포인터
    const char* cpa[2]={"hello","world"};
    f3(cpa);
    //4.구조체주소->함수->구조체포인터
    Computer myCom ={"i7-12세대"};
    f4(&myCom);
    f5(myCom);//c++시작
    //5.객체->함수->객체레퍼런스(객체별명)
    AIComputer myAICom = {"i7-13세대 인공지능"};
    f6(myAICom);
}
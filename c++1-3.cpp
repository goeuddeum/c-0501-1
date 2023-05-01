#include <iostream>
#include <math.h>
using namespace std;
#if 0
int main()
{
    cout<<"Hello World!\n";
    return 0;
    
}
#endif
#if 0
int main()
{
    int x = 5;
    int y = 7;
    cout; "\n";
    cout <<x+y<<""<<x*y;
    cout; "\n";
    return 0;
}
#endif
#if 0
int main()
{
    cout<<"Hello there.\n";
    cout<<"Here is 5:"<<5<<"\n";
    cout<<"The manipulator endl writes a new line to the screen."<<endl;
    cout<<"Here is a very big number:\t"<<70000<<endl;
    cout<<"Here is the sum of 8 and 5:\t"<<8+5<<endl;
    cout<<"Here's a fraction:\t\t"<<(float)5/8<<endl;
    cout<<"And a very very big number:\t"<<(double)7000*7000<<endl;
    cout<<"Don't forget to replace Jesse Liverty with your name...\n";
    cout<<"Jesse Liverty is a C++ programmer!\n";
    return 0;
    }
#endif
#if 0
int main()
{ /*이것이 주석이고
닫는 별표 슬래시 주석 기호가
나오는 곳까지 유효하다*/
cout<<"Hello World!\n";
//이 주석은 행의 끝에서 끝난다.
cout << "That comment ended!\n";
//이중 슬래시 주석은 한행에 단독으로 놓일 수 있다.
/*슬래시 별표 주석처럼 */
return 0;
}
#endif
#if 0
void DemonstrationFunction()
{
    cout<<"In Demonstration Function\n";
}
int main()
{
    cout<<"Imn main\n";
    DemonstrationFunction();
    cout<<"Back in main\n";
    return 0;
}
#endif
#if 1
int Add(int x, int y)
{ cout<<"In Add(),received"<<x<<"and"<<y<<"\n";
return(x+y);
}
int main()
{ cout<<"I'm in main()!\n";
int a,b,c; cout<<"Enter two numbers:";
cin>>a; cin>>b;
cout<<"\nCalling Add()\n";
c=Add(a,b);
cout<<"\nBreak in main().\n";
cout<<"c was set to"<<c;
cout<<"\n Exiting...\n\n";
return 0;
}
#endif

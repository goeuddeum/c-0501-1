#include <iostream>
#include <math.h>

using namespace std;

int main() {
    #if 0
   cout << 3 + 4 << endl;
   cout << 3 - 4 << endl;
   cout << 3 * 4 << endl;
   cout << 3 / 4 << endl;
   cout << 3.0 / 4 << endl;
   cout << 3 % 4 << endl;
   cout << pow(3, 4) << endl;
   #endif
   #if 0
   cout << (3 > 4) << endl; // 연산자 오버로딩
   cout << (3 >= 4) << endl;
   cout << (3 < 4) << endl;
   cout << (3 <= 4) << endl;
   cout << (3 == 4) << endl;
   cout << (3 != 4) << endl;
   #endif
   #if 0
   cout << (3 > 4 && 5 > 6) << endl;
   cout << (3 < 4 && 5 < 6) << endl;
   cout << (3 > 4 || 5 > 6) << endl;
   cout << (3 < 4 || 5 > 6) << endl;
   cout << (!(3 < 4)) << endl;
   cout << (!(3 > 4)) << endl;
   #endif
   #if 0
   int a = 3;
   int b = 4;
   cout << a + b << endl; 
   int c = a + b;
   cout << c << endl;
   #endif
   #if 0
   int age = 23; // int 정수변수
   if (age >= 19) {
      cout << "adult\n";
   }
   #endif
   #if 0
   int birth_year = 2004;
   if ((birth_year>=1981) && (birth_year <= 1996)) {
      cout << "M generation\n";
   }
   else if (1997 <= birth_year && birth_year <= 2012) {
      cout << "Z generation\n";
   }
   else {
      cout << "???\n";
   }
   #endif
   #if 0
   int cpp_level = 0;
   while (cpp_level < 10) {
      cout << "study c++ ";
      cpp_level++;
      cout << cpp_level << endl;
   }
   #endif
   #if 0
   int cpp_level = 0;
   while (true) {
      cout << "study c++ " << endl;
      cpp_level++;
      if (cpp_level >= 10) {
         break;
      }
   }
   #endif
   #if 0
   const char* eggs[] = {"egg0", "egg1", "egg2", "egg3"};
   cout << eggs[0] << endl;
   cout << eggs[1] << endl;
   cout << eggs[2] << endl;
   cout << eggs[3] << endl;
   eggs[2] = "egg7";
   cout << eggs[2] << endl;
   #endif
   #if 0
   const char * eggs[4] = {"egg0","egg1","egg2","egg3"};
   for (int i = 0; i < 4; i++) {
      cout << eggs[i] << endl;
   }
   #endif
}
// prog9_21, «ü¼Ð°}¦C
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char *ptr[]={"LeBron James", "KD35", "Kobe"};
   int i=0;
   for(int i=0;i<3;i++){
   	cout << ptr+i << endl;
    cout << ptr[i] << endl;
    cout << *(ptr+i) << endl<< endl;
    cout << *(ptr[i]+i) << endl;
   }
         		

   system("pause");
   return 0;
}

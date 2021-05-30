// prog9_14, 指標常數的值與位址
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,a[5]={32,16,35,65,52};
   char b[5]={'3','1','5','5','2'};
   cout << "a=" << a << endl;
   cout << "&a=" << &a << endl;
   for(i=0;i<5;i++)
      cout << "&a[" << i << "]=" << &a[i] << endl<<endl;
   
   cout << "b=" << b << endl;
   cout << "&b=" << &b << endl;
   for(i=0;i<5;i++)
      cout << "&b[" << i << "]=" << &b[i]<< endl<<endl;
   
   system("pause");
   return 0;
}

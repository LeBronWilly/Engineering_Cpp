// hw6_5,
#include <iostream>
#include <cstdlib>
using namespace std;
void mod(int,int);
int main(void)
{     
   int a=10,b=3;
   mod(a,b);
   
   system("pause");
   return 0;
}

void mod(int x,int y)
{
   cout << x << "/" << y << "���ӼƬ�" << x/y << endl;
   cout << x << "/" << y << "���l�Ƭ�" << x%y << endl;
} 

/* output-----
10/3���ӼƬ�3
10/3���l�Ƭ�1
------------*/

// prog6_14, ���j���,�p�ⶥ��
#include <iostream>
#include <cstdlib>
using namespace std;
int fact(int);
int main(void)
{
   int a;
   do	
   {
      cout << "Input an integer:";
      cin >> a;
   } while (a<=0); 	     // �T�w��J��a���j��0���� 
   cout << "1*2*...*" << a << "=" << fact(a) << endl;
   system("pause");
   return 0;
}

int fact(int a)		     // �ۭq���fact()�A�p��a!
{
   if(a>0)
      return (a*fact(a-1));
   else
      return 1;
}

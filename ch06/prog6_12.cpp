// prog6_12, �I�s�h�Ө��
#include <iostream>
#include <cstdlib>
using namespace std;
void sum(int),fact(int);
int main(void)
{
   int a=5;
   fact(a);
   sum(a);
   system("pause");
   return 0;
}

void fact(int a)	    // �ۭq���fact()�A�p��a!
{
   int i,total=1;
   for(i=1;i<=a;i++)
      total*=i;
   cout << "1*2*...*" << a << "=" << total <<  endl;      //�L�Xa!�����G
   return;
}

void sum(int a)	        //�ۭq���sum()�A�p��1+2+...+a�����G
{
   int i,sum=0;
   for(i=1;i<=a;i++)
      sum+=i;
   cout << "1+2+...+" << a << "=" << sum << endl;         // �L�X�p�⵲�G
   return;
}

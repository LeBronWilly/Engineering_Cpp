// prog7_6, �޼ƫ��A���P����Ʀh�� 
#include <iostream>
#include <cstdlib>
using namespace std;
int add(int,int);			       // �H�h�����覡�ŧi��ƭ쫬
double add(double,double);
int main(void)
{
   int a=10,b=20;
   double x=2.3,y=3.5;
   cout << a << "+" << b << "=" << add(a,b) << endl;
   cout << x << "+" << y << "=" << add(x,y) << endl;
   system("pause");
   return 0;
}

int add(int i,int j) 		       // �ۭq���add()
{
   return i+j;       			   // �Ǧ^i+j���� 
}

double add(double i,double j)	   // �ۭq���add()
{      
   return i+j;       			   // �Ǧ^i+j���� 
}

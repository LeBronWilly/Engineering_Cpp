// prog6_4, �Ǧ^���j��
#include <iostream>
#include <cstdlib>
using namespace std;
int max(int,int);     // ��ƭ쫬���ŧi
int main(void)
{
   int a=12,b=35;
   cout << "a=" << a << ", b=" << b << endl;	// �L�Xa,b����
   cout << "The larger number is " << max(a,b) << endl; // �L�X���j��
   system("pause");
   return 0;
}

int max(int i,int j)	  // �ۭq�����max(),�Ǧ^���j�� 
{
   if (i>j)
      return i;
   else
      return j;
}

// prog6_5, �S���Ǧ^�Ȫ����
#include <iostream>
#include <cstdlib>
using namespace std;
void myprint(int,char);       	// ��ƭ쫬���ŧi 
int main(void)
{
   int a=6;
   char ch='%';
   myprint(a,ch);		  	// �I�s�ۭq����ơA�L�Xa�Ӧr�� 
   cout << "Printed!!" << endl;
   system("pause");
   return 0;
}

void myprint(int n,char c) 	// �ۭq�����myprint()
{
   int i;
   for(i=1;i<=n;i++)
      cout << c;				// �L�X�r��
   cout << endl;
   return;
}

// prog6_2, ���ϥΨ�ƭ쫬���覡 
#include <iostream>
#include <cstdlib>
using namespace std;
int square(int a)    // �ۭq�����square(), �p�⥭��� 
{
   int squ;
   squ=a*a;
   return squ;
}

int main(void)       // �D�{�� 
{
   cout << "square(6)=" << square(6) << endl; // �L�Xsquare(6)����
   system("pause");
   return 0;
}

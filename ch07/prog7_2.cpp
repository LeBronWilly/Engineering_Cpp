// prog7_2, �ѷӪ��{�� 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int num=5;
   int &rm=num;		                   // �ŧirm��num���ѷ�
   
   rm=rm+10;			               // �ѷ�rm�[10
   cout << "num=" << num << endl;	   // �L�Xnum����
   cout << "rm=" << rm << endl; 	   // �L�Xrm����
   system("pause");
   return 0;
}

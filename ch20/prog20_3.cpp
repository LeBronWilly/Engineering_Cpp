//prog20_3, �ϥ�using����r
#include <iostream>   
#include <cstdlib>

namespace name1    		                              // �]�w�W�٪Ŷ�name1
{
   int var=5;
}

using namespace name1;	                              // �]�w����H�U���{���X���ϥ�name1�W�٪Ŷ�
using namespace std; 	                              // �]�w����H�U���{���X�]�ϥ�std�W�٪Ŷ�
int main(void)
{
   cout << "var= " << var << endl;                    // �L�Xname1�W�٪Ŷ���var����

   int var=10;     		                              // �]�w�ϰ��ܼ�var
   cout << "main()�̪��ܼ� var= " << var << endl;     // �L�X�ϰ��ܼ�var����

   cout << "name1::var= " << name1::var << endl;      // �L�Xname1��var����

   system("pause");
   return 0;
}

//prog20_1, �ϥ�namespace
#include <iostream>   
#include <cstdlib>

namespace name1          // �]�w�W�٪Ŷ�name1
{
   int var=5;            // �b�W�٪Ŷ�name1���ŧi�ܼ�var
}
using namespace std;
int main(void)
{
   int var=10;           // �ŧi�ϰ��ܼ�var
   
   cout << "in name1, var= " << name1::var << endl;
   cout << "var= " << var << endl;
  
   system("pause");
   return 0;
}

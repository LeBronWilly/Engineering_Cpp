//prog20_4, �b�϶����ϥΤ��P���W�٪Ŷ�
#include <iostream>   
#include <cstdlib>

namespace name1                        // �]�w�W�٪Ŷ�name1
{
   int var=5;
}

namespace name2                        // �]�w�W�٪Ŷ�name2
{
   int var=10;
}
using namespace std;
int main(void)
{
   {  
      using namespace name1;           // �ϥΦW�٪Ŷ�name1
      cout << "in namespace name1: ";
      cout << "var= " << var << endl;
   }

   {
      using namespace name2;           // �ϥΦW�٪Ŷ�name2
      cout << "in namespace name2: ";   
      cout << "var= " << var << endl;
   }   
   
   system("pause");
   return 0;
}

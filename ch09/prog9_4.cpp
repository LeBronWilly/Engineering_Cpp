// prog9_4, �����ܼƪ��j�p
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int *ptri;		      // �ŧi���V��ƪ�����ptri
   char *ptrc; 		      // �ŧi���V�r��������ptrc
      
   cout << "sizeof(ptri)=" << sizeof(ptri) << endl;
   cout << "sizeof(ptrc)=" << sizeof(ptrc) << endl;
   cout << "sizeof(*ptri)=" << sizeof(*ptri) << endl;
   cout << "sizeof(*ptrc)=" << sizeof(*ptrc) << endl;
   
   system("pause");
   return 0;
}

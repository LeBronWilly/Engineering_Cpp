// prog9_7, �ǻ����Ш��Ƹ�
#include <iostream> 
#include <cstdlib>
using namespace std;
void address(int *);      	// �ŧiaddress()��ƪ��쫬
int main(void)
{
   int a=12; 		     	// �]�w�ܼ�a���Ȭ�12
   int *ptr=&a;			    // �N����ptr���V�ܼ�a

   address(&a);			    // �Na����}�ǤJaddress()��Ƥ�
   address(ptr); 		    // �Nptr�ǤJaddress()��Ƥ�
   
   system("pause");
   return 0;
}
void address(int *p1)
{
   cout << "���}" << p1 << "���A�x�s���ܼƤ��e��" << *p1 << endl;
   return;
}

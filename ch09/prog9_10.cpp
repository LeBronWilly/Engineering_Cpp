// prog9_10, �Na�Pb�Ȥ���(���T�d��)
#include <iostream> 
#include <cstdlib>
using namespace std;
void swap(int *,int *);            // ���swap()�쫬���ŧi
int main(void)
{
   int a=5,b=20;
   cout << "�洫�e... a=" << a << ", b=" << b << endl;
   swap(&a,&b);      		       // �I�sswap()���,�öǤJa�Pb����}
   cout << "�洫��... a=" << a << ", b=" << b << endl;

   system("pause");
   return 0;
}
void swap(int *p1,int *p2)	       // swap()��ƪ��w�q
{
   int tmp=*p1;
   *p1=*p2;
   *p2=tmp;
   return;
}

// prog9_9, �Na�Pb�Ȥ���(���~�ܽd)
#include <iostream> 
#include <cstdlib>
using namespace std;
void swap(int,int);		          // swap()��ƪ��쫬
int main(void)
{
   int a=5,b=20;
   cout << "�洫�e... a=" << a << ", b=" << b << endl;
   swap(a,b);
   cout << "�洫��... a=" << a << ", b=" << b << endl;

   system("pause");
   return 0;
}
void swap(int x,int y)	          // �w�qswap()���
{
   int tmp=x;
   x=y;
   y=tmp;
   return;
}

// prog9_8, �ǻ����Ъ�����
#include <iostream> 
#include <cstdlib>
using namespace std;
void add10(int *);		        // add10()��ƪ��쫬
int main(void)
{
   int a=5; 			        // �]�w�ܼ�a���Ȭ�5

   cout << "�I�sadd10()���e, a=" << a << endl;
   add10(&a);
   cout << "�I�sadd10()����, a=" << a << endl;

   system("pause");
   return 0;
}
void add10(int *p1)
{
   *p1=*p1+10;
   return;
}

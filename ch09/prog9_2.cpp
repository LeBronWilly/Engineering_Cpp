// prog9_2, �����ܼƪ��ŧi
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int *ptr,num=23;	  	     // �ŧi�ܼ�num�P�����ܼ�ptr
   
   ptr=&num;			  	 // �Nnum����}�]������ptr�s��
   cout << "num=" << num << ", &num=" << &num << endl;
   cout << "*ptr=" << *ptr << ", ptr=" << ptr;
   cout << ", &ptr=" << &ptr << endl;
   
   system("pause");
   return 0;
}

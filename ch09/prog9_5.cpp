// prog9_5, ���Ъ��ާ@�m��
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=5,b=10;
   int *ptr1,*ptr2;
   ptr1=&a;				// �Nptr1�]��a����}
   ptr2=&b;			 	// �Nptr2�]��b����}
   *ptr1=7;			 	// �Nptr1���V�����e�]��7
   *ptr2=32;			// �Nptr2���V�����e�]��32
   a=17;			 	// �]�wa��17
   ptr1=ptr2;		 	// �]�wptr1=ptr2
   *ptr1=9;		 	 	// �Nptr1���V�����e�]��9	
   ptr1=&a;		 	 	// �Nptr1�]��a����}
   a=64;            	// �]�wa��64
   *ptr2=*ptr1+5; 	 	// �Nptr2���V�����e�]��*ptr1+5
   ptr2=&a;		 		// �Nptr2�]��a����}
   
   cout << "a=" << a << ", b=" << b;
   cout << ", *ptr1=" << *ptr1 << ", *ptr2=" << *ptr2 << endl;
   cout << "ptr1=" << ptr1 << ", ptr2=" << ptr2 << endl;   
   
   system("pause");
   return 0;
}

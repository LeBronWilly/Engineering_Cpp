// prog8_10, �L�X�}�C����}
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void func(int []);  		         // �ŧi��ƭ쫬
int main(void)
{
   int i,a[]={20,8,13,6,23,24,3,100,36};
   cout << "In main()," << endl;     // �L�X�}�Ca���ȤΦ�}
   for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
   {
      cout << "a[" << i << "]=" << setw(2) << a[i];
      cout << ",address=" << &a[i] << endl;
   }
   cout<<"\n";
   func(a);
   cout<< "\n�Y�Nb[8]=0�A�ha[8]=" <<a[8]<<"\n";
   cout << "address=" << &a[8]<<" (�O�����}����)" << endl<< endl;
   system("pause");
   return 0;
}

void func(int b[])		             // �ۭq���func()
{	
   int i;
   cout << "In func()," << endl;	 // �L�X�}�Cb���ȤΦ�}
   for(i=0;i<9;i++)
   {
      cout << "b[" << i << "]=" << setw(2) << b[i];
      cout << ",address=" << &b[i] << endl;
   }
   b[8]=0;
   return;
}

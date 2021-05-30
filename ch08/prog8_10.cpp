// prog8_10, 印出陣列的位址
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void func(int []);  		         // 宣告函數原型
int main(void)
{
   int i,a[]={20,8,13,6,23,24,3,100,36};
   cout << "In main()," << endl;     // 印出陣列a的值及位址
   for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
   {
      cout << "a[" << i << "]=" << setw(2) << a[i];
      cout << ",address=" << &a[i] << endl;
   }
   cout<<"\n";
   func(a);
   cout<< "\n若將b[8]=0，則a[8]=" <<a[8]<<"\n";
   cout << "address=" << &a[8]<<" (記憶體位址不變)" << endl<< endl;
   system("pause");
   return 0;
}

void func(int b[])		             // 自訂函數func()
{	
   int i;
   cout << "In func()," << endl;	 // 印出陣列b的值及位址
   for(i=0;i<9;i++)
   {
      cout << "b[" << i << "]=" << setw(2) << b[i];
      cout << ",address=" << &b[i] << endl;
   }
   b[8]=0;
   return;
}

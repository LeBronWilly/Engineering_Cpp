// prog7_19, 命令列引數的使用
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
   int tem=0,sum=0;
   for(int i=1;i<argc;i++){
   	tem=atoi(argv[i]);
   	sum+=tem;
   }
   cout << "total=" <<sum << "\n";
////   int a=atoi(argv[1]);    // 將命令列引數轉換成數值 
////   int b=atoi(argv[2]);
//   cout << a << "+" << b << "=" << a+b << endl;  
   system("pause");
   return 0;
}

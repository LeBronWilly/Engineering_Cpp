// prog7_15, 使用巨集
#include <iostream>
#include <cstdlib>
using namespace std;
#define POWER(X) X*X*X
int main(void)
{
   int i;
   cout << "Input an integer:";
   cin >> i;
   
   // 計算並印出i+1的3次方
   cout << i+1 << "*" << i+1 << "*" << i+1 << "=" << POWER(i+1) << endl;
   cout<<"由於會變成i+1*i+1*i+1=3i+1，因此#define POWER(X)要改成(X)*(X)*(X)" << endl;
   system("pause");
   return 0;
}

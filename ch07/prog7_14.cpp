// prog7_14, �ϥΥ���
#include <iostream>
#include <cstdlib>
using namespace std;
#define POWER(X) X*X*X
int main(void)
{
   int i;
   cout << "Input an integer:";
   cin >> i;
   
   // �p��æL�Xi��3����
   cout << i << "*" << i << "*" << i << "=" << POWER(i) << endl;
   system("pause");
   return 0;
}

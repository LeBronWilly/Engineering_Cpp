// prog7_15, �ϥΥ���
#include <iostream>
#include <cstdlib>
using namespace std;
#define POWER(X) X*X*X
int main(void)
{
   int i;
   cout << "Input an integer:";
   cin >> i;
   
   // �p��æL�Xi+1��3����
   cout << i+1 << "*" << i+1 << "*" << i+1 << "=" << POWER(i+1) << endl;
   cout<<"�ѩ�|�ܦ�i+1*i+1*i+1=3i+1�A�]��#define POWER(X)�n�令(X)*(X)*(X)" << endl;
   system("pause");
   return 0;
}

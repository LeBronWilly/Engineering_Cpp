// prog7_13, �ϥΥ���
#include <iostream>
#include <cstdlib>
using namespace std;
#define POWER i*i*i
int main(void)
{
   int i;
   cout << "Input an integer:";
   cin >> i;
   
   // �p��æL�Xi��3����
   cout << i << "*" << i << "*" << i << "=" << POWER << endl;
   system("pause");
   return 0;}

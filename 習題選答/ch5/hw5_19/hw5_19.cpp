// hw5_19,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int i=0; 		// �j�鱱���ܼ�

   cout << "�i�J�j��, i=" << i << endl;
   for(i=0;i<=99999999;i++);

   cout << "���}�j��, i=" << i << endl;

   system("pause");
   return 0;
}

/* output----------------
�i�J�j��, i=0
���}�j��, i=100000000
-----------------------*/

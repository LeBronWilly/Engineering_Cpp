// hw5_9,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int amount=12500;
   float pay=(float)amount;

   cout << "���O�B��" << amount << endl;
   if(amount>=1000 && amount<3000)     
      pay=amount*0.95f;
   else if(amount>=3000 && amount<5000)
      pay=amount*0.92f;
   else if(amount>=5000 && amount<10000)
      pay=amount*0.9f;
   else if(amount>=10000)
      pay=amount*0.85f;
   
   cout << "����I�����B��" << pay << endl;

   system("pause");
   return 0;
}

/* output----------------
���O�B��12500
����I�����B��10625
-----------------------*/

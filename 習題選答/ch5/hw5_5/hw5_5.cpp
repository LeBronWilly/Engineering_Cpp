// hw5_5,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   float height=1.71f;
   float weight=58.2f;
   float bmi;

   bmi=weight/(height*height);
   cout << "����=" << height << "����" << endl;
   cout << "�魫=" << weight << "����" << endl;
   cout << "BMI=" << bmi << endl;

   if(bmi<18.5)
      cout << "�魫�L��" << endl;
   else if(bmi>=24.0)
      cout << "�魫�L��" << endl;
   else
      cout << "�魫�з�" << endl;

   system("pause");
   return 0;
}

/* output----------------
����=1.71����
�魫=58.2����
BMI=19.9036
�魫�з�

-----------------------*/

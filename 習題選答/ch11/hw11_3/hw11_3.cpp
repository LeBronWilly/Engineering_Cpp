// hw11_3,
#include <iostream>
#include <cstdlib>
using namespace std;
struct mydata
{
   float f;
   float c;
}temperature;
int main(void)
{
   char tem;
   do{
      cout << "(1)�ؤ�->���" << endl;
      cout << "(2)���->�ؤ�" << endl;
      cout << "�п��(1)��(2):";
      cin.get(tem);
      cin.get();
   }while((tem>50)||(tem<49));

   if(tem=='1')
   {
      cout << "�п�J�ؤ�ū�: ";
      cin  >> temperature.f;
   }
   else
   {
      cout << "�п�J���ū�: ";
      cin  >> temperature.c;
   }
   cout << endl << "**** ��X ****" << endl;

   if(tem=='1')
   {
      temperature.c=(temperature.f*5.0/9)-(160/9.0);
      cout << "�ؤ� " << temperature.f << " ��=��� ";
      cout << temperature.c << " ��" << endl;
   }
   else
   {
      temperature.f=(temperature.c*9/5.0)+32;
      cout << "��� " << temperature.c << " ��=�ؤ� ";
      cout << temperature.f << " ��" << endl;
   }
   system("pause");
   return 0;
}

/* output-------------------------------
(1)�ؤ�->���
(2)���->�ؤ�
�п��(1)��(2):2
�п�J���ū�: 32

**** ��X ****
��� 32 ��=�ؤ� 89.6 ��
--------------------------------------*/

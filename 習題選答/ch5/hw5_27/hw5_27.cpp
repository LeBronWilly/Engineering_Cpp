// hw5_27,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int month=10;  
   cout << month << "��O";
   switch(month)
   {
      case 1:
      case 2: cout << "�H��" << endl;
            break;
      case 3:
      case 4: 
      case 5: 
      case 6: cout << "�U�Ǵ�" << endl;
            break;
      case 7:
      case 8: cout << "����" << endl;
            break;
      case 9: 
      case 10:
      case 11:
      case 12: cout << "�W�Ǵ�" << endl;
            break;
      default:
            cout << "���s�b" << endl;;
   }

   system("pause");
   return 0;
}

/* output------
10��O�W�Ǵ�
-------------*/

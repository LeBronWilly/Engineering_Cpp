// hw5_25,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int day=7;  
   cout << "day=" << day << endl;
   switch(day)
   {
      case 1: cout << "�P���@" << endl;
            break;
      case 2: cout << "�P���G" << endl;
            break;
      case 3: cout << "�P���T" << endl;
            break;
      case 4: cout << "�P���|" << endl;
            break;
      case 5: cout << "�P����" << endl;
            break;
      case 6: cout << "�P����" << endl;
            break;
      case 7: cout << "�P����" << endl;
            break; 
      default:
            cout << "���s�b" << endl;;
   }

   system("pause");
   return 0;
}

/* output------
day=7
�P����
-------------*/

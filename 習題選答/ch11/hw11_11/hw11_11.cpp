// hw11_11,
#include <iostream>
#include <cstdlib>
using namespace std;
enum week
{   Monday,Tuesday,Wednesday,Thuresday,
    Friday,Saturday,Sunday  }seven;
int main(void)
{
   int i;
   string a[7]={"Monday","Tuesday","Wednesday",
                  "Thuresday","Friday","Saturday","Sunday"};
   cout << "�п�J1~7�H��ܬP��:";
   cin >> i;
   seven=static_cast<week>(i);
      cout << "�P��" << seven << "=" << a[seven-1] << endl;

   system("pause");
   return 0;
}

/* output---------------------------
�п�J1~7�H��ܬP��:5
�P��5=Friday
----------------------------------*/

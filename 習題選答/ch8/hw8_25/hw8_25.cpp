// hw8_25,
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   int i;
   string a[]={"January","February","March","April",
               "May","June","July","August","September",
               "October","November","December"};
   cout << "��J���:";
   cin  >> i;
   cout << a[i-1] << endl;
   
   system("pause");
   return 0;
}

/* output----
��J���:7
July
-----------*/

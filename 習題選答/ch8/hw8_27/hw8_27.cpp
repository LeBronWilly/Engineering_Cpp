// hw8_27,
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;
int main(void)
{
   int i,score[5]={0};
   double sum=0.0;
   string stu[5]={"Richard","Amy Lee","Paul Yang",
                  "Mary Wang","Jean Fen"};
   for(i=0;i<5;i++)
   {
      cout << stu[i] << " �����Z: ";
      cin  >> score[i];
   }
   cout << endl;
   for(i=0;i<5;i++)
      cout << stu[i] << "  ";
   cout << endl;    
   for(i=0;i<5;i++)
   {
      cout << "  " << setw(3) << score[i] << "     ";
      sum=sum+score[i];
   }
   cout << endl << endl << "����=" << setw(4) << sum/5 << endl;
         
   system("pause");
   return 0;
}

/* output-------------------------------------------
Richard �����Z: 85
Amy Lee �����Z: 90
Paul Yang �����Z: 78
Mary Wang �����Z: 95
Jean Fen �����Z: 70

Richard  Amy Lee  Paul Yang  Mary Wang  Jean Fen
   85        90        78        95        70

����=83.6
---------------------------------------------------*/

//hw11_7,
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
union data
{
   char grade;
   int score;
}a;
struct mydata
{
   string name;
   string id;
   char sex;
}employee;
int main(void)
{
   cout << "�m�W:";
   getline(cin,employee.name);
   cout << "�H�ƥN��:";
   getline(cin,employee.id);   
   cout <<"�ʧO (1)�k (2)�k:";
   cin.get(employee.sex);
   cin.get();
   if(employee.sex=='1')
   {
      cout << "�A���L��(y/n):";
      cin.get(a.grade);
   }
   else
   {
      cout <<"�C���������t��:";
      cin >> a.score;
      cin.get();
   }

   cout << "**** Output ****" << endl;
   cout << "�m�W =" << employee.name << endl;
   cout << "�H�ƥN��:" << employee.id << endl;

   if(employee.sex=='1')
      cout << "�L�Ъ��p:" << a.grade << endl;
   else
      cout << "�����t��:" << a.score << endl;

   system("pause");
   return 0;
}

/* output---------------------------
Input name:Tippi Hong
Input birthday(yy):72
Input birthday(mm):08
Input birthday(dd):24
Input major:Reading, Programing
Your sex is (1)Male (2)Female:2
�C���������t��:85
**** Output ****
name=Tippi Hong
birthday:72/8/24
major=:Reading, Programing
�����t��:85
----------------------------------*/

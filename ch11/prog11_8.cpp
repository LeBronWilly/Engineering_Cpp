// prog11_8, �@�P�Ŷ����ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
union mydata		// �w�q�@�P�Ŷ�
{
   char grade;
   int score;
} student;			// �ŧi�@�P�Ŷ��ܼ�
int main(void)
{
   char sex;
   do {
      cout << "Your sex is (1)Male (2)Female:"; 	// ��J�ʧO
      cin.get(sex);
      cin.get();      	// �l���h�l��enter�� 
   }while((sex>'2') || (sex<'1'));
   if (sex=='1')
   {	
      cout << "Input score:";
      cin >> student.score;
   }
   else
   {	
      cout << "Input grade:";
      cin.get(student.grade);
   }
   cout << "**** Output ****" << endl;			// ��X
   if (sex=='1')
      cout << "student.score=" << student.score << endl;
   else
      cout << "student.grade=" << student.grade << endl;
   
   system("pause");
   return 0;
}

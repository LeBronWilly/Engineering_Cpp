// prog11_9, �@�P�Ŷ����]��
#include <iostream>
#include <cstdlib>
using namespace std;
union mydata		// �w�q�@�P�Ŷ�
{
   int score;
   char grade;
} student={65};		// �ŧi�@�P�Ŷ��ܼ�
int main(void)
{
   cout << "sizeof(student)=" << sizeof(student) << endl;
   cout << "student.score=" << student.score << endl;
   
   system("pause");
   return 0;
}

// prog11_1, ���c�ܼƪ���J�P��X
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata		                         // �w�q�ëŧi���c�ܼ�
{
    string name;
    int math;
} student;
int main(void)
{
   cout << "Student's name:";   			 // ��J���c�ܼ�
   getline(cin,student.name);
   cout << "Math score:";
   cin >> student.math;
   cout << "*****Output*****" << endl;   	 // ��X���c�ܼƤ��e
   cout << student.name << "'s Math score is " << student.math;
   
   system("pause");
   return 0;
}

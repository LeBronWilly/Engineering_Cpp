// prog11_3, ���c�ܼƪ���ȳ]�w
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata	                              // �w�q�ëŧi���c�ܼ�
{
   string name;
   int math;
} student={"Mary Wang",74};                   // �]�w���c�ܼƪ��
int main(void)
{
   cout << "Student's name:" << student.name; // ��X���c�ܼƤ��e
   cout << endl << "math score=" << student.math << endl;
   
   system("pause");
   return 0;
}

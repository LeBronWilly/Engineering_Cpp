// prog11_10, �@�P�Ŷ����j�p�Φ�}
#include <iostream>
#include <cstdlib>
using namespace std;
union mydata	// �w�q�@�P�Ŷ�
{
   short math;
   float avg;
} student;
int main(void)
{
   cout << "sizeof(student)=" << sizeof(student) << endl;
   cout << "address of student.math=" << &student.math << endl;
   cout << "address of student.avg=" << &student.avg << endl;
   
   system("pause");
   return 0;
}

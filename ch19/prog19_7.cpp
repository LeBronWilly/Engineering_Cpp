//prog19_7, �˪O���ϥνd��(�޼ƫ��A���P��)
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T1, class T2>    	// �w�q��Ƽ˪O
double average(T1 a,T2 b) // �w�qaverage()�A�i����T1�PT2���A���ܼ�
{
   cout << "sizeof(a)= " << sizeof(a) << ", ";
   cout << "sizeof(b)= " << sizeof(b) << endl;   
   return (double)(a+b)/2;   		// �Ǧ^�ܼ�a,b��������
}

int main(void)
{
   cout << "average(3,4.2)= " << average<int,double>(3,4.2) << endl;
   cout << "average(5.7,12)= " <<  average<double,int>(5.7,12)  << endl;

   system("pause");
   return 0;
}

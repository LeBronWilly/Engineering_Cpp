// prog6_1, ²�檺���
#include <iostream>
#include <cstdlib>
using namespace std;
void star(void); 	                    // ��ƭ쫬���ŧi
int main(void)
{
   star();			                    // �I�s�ۭq����ơA�L�X�P��
   cout << "6*6=" << 6*6 << endl;       // �L�X6������� 
   star();			                    // �I�s�ۭq����ơA�L�X�P��
   system("pause");
   return 0;
}

void star(void)		                    // �ۭq�����star() 
{
   int j;
   for(j=1;j<=8;j++)
      cout << "*";	                    // �L�X*�P��
   cout << endl;
   return;
}

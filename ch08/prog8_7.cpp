// prog8_7, �H�@���}�C���޼�
#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 5
void show(int []);			              // ��ƭ쫬���ŧi
double average(int []);		              // ��ƭ쫬���ŧi
int main(void)
{
   int score[SIZE]={89,54,73,95,71};	  // �ŧi�}�C�ó]�w���
   cout << "�ǥͪ����Z�� ";  
   show(score);
   cout << "�������Z=" << average(score) << endl;  
   
   system("pause");
   return 0;
}

void show(int a[])			              // ��ܾǥͦ��Z 
{  
   for(int i=0;i<SIZE;i++)
      cout << a[i] << " ";
   cout << endl;
   return;
}

double average(int a[])		              // �p�⥭�����Z 
{
   double sum=0;
   for(int i=0;i<SIZE;i++)
      sum+=a[i];
   return (sum/SIZE);
}

// prog7_7, �޼ƭӼƤ��P����Ʀh�� 
#include <iostream>
#include <cstdlib>
using namespace std;
void print(void);                  // �H�h�����覡�ŧi��ƭ쫬
void print(int);
void print(char,int);
int main(void)
{
   cout << "calling print(), ";
   print();
   cout << "calling print(8), ";
   print(8);
   cout << "calling print('+',3), ";
   print('+',3);
   system("pause");
   return 0;
}

void print(void)   			       // �S���޼ƪ�print()�A�L�X5��*
{
   print(5);					   // �I�s26~33�檺print()�A�öǤJ���5
   return;
}

void print(int a)			       // ���@�Ӥ޼ƪ�print()�A�L�Xa��*
{
   int i;
   for(i=0;i<a;i++)
      cout << "*";
   cout << endl;
   return; 
}

void print(char ch,int a)		   // ���G�Ӥ޼ƪ�print()�A�L�Xa��ch
{
   int i;
   for(i=0;i<a;i++)
      cout << ch;
   cout << endl; 
   return;
}

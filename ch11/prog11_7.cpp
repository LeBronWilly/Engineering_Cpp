// prog11_7, �H���жǻ����c����
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct data			                              // �w�q���c
{
	string name;
	int a,b;
};
void change(struct data *),prnstr(struct data);   // ��ƭ쫬
int main(void)
{
   struct data first={"David Young",9,2}; 		  // �ŧi���c�ܼ�
   prnstr(first);
   cout << "after process..." << endl;
   change(&first);
   prnstr(first);
   
   system("pause");
   return 0;
}

void change(struct data *ptr)		              // �ۭq���change()
{	
   int temp;
   temp=ptr->a;            // ptr->a�i���Xptr�ҫ��V�����c�����a����
   ptr->a=ptr->b;          // ���X���b���ȡA�ó]�w�����a�s��
   ptr->b=temp;            // �Ntemp�]�w��ptr�ҫ��V�����c�����b�s��
   return;
}

void prnstr(struct data in)		                  // �L�X���c�ܼƤ��e
{
   cout << "name=" << in.name << endl;
   cout << "a=" << in.a << "\t";
   cout << "b=" << in.b << endl;
   return;
}

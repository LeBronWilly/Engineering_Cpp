// prog11_12, �C�|���A���ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
enum month	// �w�q�C�|���A
{	January,February,March,
    April,May,June } six;
int main(void)
{
   cout << "sizeof(six)=" << sizeof(six) << endl; // �C�|���A������
   cout << "January=" << January << endl;   // �L�X�C�|�`�ƪ���
   cout << "February=" << February << endl;
   cout << "March=" << March << endl;
   cout << "April=" << April << endl;
   cout << "May=" << May << endl;
   cout << "June=" << June << endl;
   
   system("pause");
   return 0;
}

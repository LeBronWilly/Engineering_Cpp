// prog11_13, �C�|�`�ƪ��]��
#include <iostream>
#include <cstdlib>
using namespace std;
enum month	                                 // �w�q�C�|���A
{	January,February,March=4,			     // �NMarch�]�Ȭ�4
    April,May,June } six;
int main(void)
{
   cout << "January=" << January << endl;    // �L�X�C�|�`�ƪ���
   cout << "February=" << February << endl;
   cout << "March=" << March << endl;
   cout << "April=" << April << endl;
   cout << "May=" << May << endl;
   cout << "June=" << June << endl;
   
   system("pause");
   return 0;
}

// prog12_4, ����P���O�Ҧ����줸��
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    	// �w�q�������OCWin
{
   public:   	// �]�w��Ʀ���������
     char id;
     int width;   
     int height;
};
int main(void)
{
   CWin win1;   	// �ŧiCWin���O���A���ܼ�win1

   cout << "sizeof(win1) = " << sizeof(win1) << " bytes" << endl;
   cout << "sizeof(CWin) = " << sizeof(CWin) << " bytes" << endl;
   
   system("pause");
   return 0;
}

// prog8_21, �r��}�C���ƻs
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   int i,j;
   string students[3]={"David","Jane Wang","Tom Lee"};
   string copystr[3];
   for(i=0;i<3;i++)           // �N�}�Cstudents�����e�ƻs��copystr
      copystr[i]=students[i];
      
   for(i=0;i<3;i++)           // �L�X�}�Ccopystr�����e
      cout << "copystr[" << i << "]=" << copystr[i] << endl;
	
   system("pause");
   return 0;
}

// prog20_11.cpp �D�{��������
#include <iostream>
#include <cstdlib>
#include "cwin.h"        			// ���Jcwin.h���Y��
#include "cminiwin.h"   			// ���Jcminiwin.h���Y��
using namespace std;

int main(void)
{
   CWin win1('A',50,60);          	// �إ�win1����
   CMiniWin m_win('M',40,50);    	// �إ�m_win����
   
   win1.show();              		// �Hwin1����I�sshow()
   m_win.show();			 		// �Hm_win����I�sshow()

   system("pause");
   return 0;
}

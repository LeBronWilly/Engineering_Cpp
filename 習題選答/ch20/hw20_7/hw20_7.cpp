// hw20_7.cpp,
#include <cstdlib>
#include <iostream>
#include "cwin.h"
#include "ctextwin.h"
using namespace std;
int main(void)
{
   CTextWin tx1('A',"Hello C++");	// �إߤl���O������
   CTextWin tx2(tx1);

   tx1.show_member();
   tx2.show_member();

   cout << "���tx1���󪺦�������..." << endl;
   tx1.set_member('B',"Welcome C++");

   tx1.show_member();
   tx2.show_member();

   system("pause");
   return 0;
}

/* output-----------------------------
CWin()�غc���Q�I�s�F...
CTextWin()�غc���Q�I�s�F...
CWin()�����غc���Q�I�s�F...
CTextWin()�����غc���Q�I�s�F...
Window A: text = Hello C++
Window A: text = Hello C++
���tx1���󪺦�������...
Window B: text = Welcome C++
Window A: text = Hello C++
�Ы����N���~�� . . .
CTextWin()�Ѻc���Q�I�s�F...
�Ы����N���~�� . . .
CWin()�Ѻc���Q�I�s�F...
�Ы����N���~�� . . .
CTextWin()�Ѻc���Q�I�s�F...
�Ы����N���~�� . . .
CWin()�Ѻc���Q�I�s�F...
�Ы����N���~�� . . .
------------------------------------*/

// show.cpp�A�Ψ���ܸ�Ʀ���
#include "cwin.h"  		// ���Jcwin.h���Y��
#include "cminiwin.h"  // ���Jcminiwin.h���Y��
#include <iostream>
using namespace std;

void CWin::show(void) 	// �w�qshow()���
{
   cout << "Window " << id << ":" << endl;
   cout << "Area = " << width*height << endl;
}

void CMiniWin::show(void)
{
   cout << "Mini window " << id << ":" << endl;
   cout << "Area = " << 0.8*width*height << endl;
}

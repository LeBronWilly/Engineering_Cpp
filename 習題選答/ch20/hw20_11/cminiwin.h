// cminiwin.h, ���ɮשw�q�l���OCMiniWin
#include <iostream>
#include "cwin.h"
using namespace std;

class CMiniWin: public CWin    // �w�q�l���OCMiniWin
{
   public:
     CMiniWin(char ch, int w, int h):CWin(ch,w,h){}
     void show(void);
};

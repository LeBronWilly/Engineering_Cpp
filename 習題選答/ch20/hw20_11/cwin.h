// ���Y��cwin.h�A�Ψ��x�sCWin���O���w�q
#ifndef CWIN_H   // �p�GCWIN_H�S���Q�w�q�L
#define CWIN_H   // �h�w�qCWIN_H

class CWin    // �w�q�������OCWin
{
   protected:
     char id;
     int width;
     int height;
   public:
     CWin(char ch, int w, int h):id(ch),width(w),height(h){}
     void show(void);    // �������area()���쫬
};

#endif    // #ifndef�즹����

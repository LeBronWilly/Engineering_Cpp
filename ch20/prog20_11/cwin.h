// ���Y��cwin.h�A�Ψ��x�sCWin���O���w�q
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

//prog19_9, ���O�˪O���ϥνd��(���P�޼ƫ��A������)
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T1,class T2>               // �w�q���O�˪O
class CWin
{
   protected:
     T1 width;       	                   // ���wwidth�����A��T1
     T2 height;		                       // ���wheight�����A��T2
   public:
     CWin(T1 w,T2 h):width(w),height(h){};
   
     void show(void);
};

template <class T1, class T2>
void CWin<T1,T2>::show()                   // �w�qshow()���
{
   cout << "width=" << width << ", ";
   cout << "height=" << height << endl;
}

int main(void)
{
   CWin <int,double> win1(50,60.05);       // �إ�win1����
   CWin <double,int> win2(50.25,74);       // �إ�win2����
   
   cout << "win1 object: ";
   win1.show();
   cout << "win2 object: ";   
   win2.show();
   
   system("pause");
   return 0;
}

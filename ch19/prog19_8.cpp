//prog19_8, ���O�˪O���ϥνd��
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T>          	              // �w�q���O�˪O
class CWin
{
   protected:
      T width, height;         	              // �ŧi��Ʀ���
   
   public:
      CWin(T w,T h):width(w),height(h){};     // �غc��
   
      void show(void);         	              // show()��ƪ��쫬
};

template <class T>          	              // �w�qshow()���
void CWin<T>::show()
{
   cout << "width=" << width << ", ";
   cout << "height=" << height << endl;
}

int main(void)
{
   CWin <int> win1(50,60);                    // �إ�win1����
   CWin <double> win2(50.25,60.74);           // �إ�win2����
   
   cout << "win1 object: ";
   win1.show();
   cout << "win2 object: ";
   win2.show();
   
   system("pause");
   return 0;
}

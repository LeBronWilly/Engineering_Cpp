// hw12_7,
#include <iostream>
#include <cstdlib>
using namespace std;
class CBox
{
   public:
      int length;
      int width;
      int height;
      void volume(void)
      {
         cout << "��n=" << length*width*height << endl;
      }
      void surfaceArea(void)
      {
         cout << "���n=" << 2*(length*width+length*height
                 +width*height) << endl;
      }
};

int main(void)
{
  CBox a;
  a.height=3;
  a.width=4;
  a.length=5;
  cout << "��=" << a.length << endl;
  cout << "�e=" << a.width << endl;
  cout << "��=" << a.height << endl;
  a.volume();
  a.surfaceArea();
  
  system("PAUSE");
  return 0;
}

/* output--------------------
��=5
�e=4
��=3
��n=60
���n=94
---------------------------*/

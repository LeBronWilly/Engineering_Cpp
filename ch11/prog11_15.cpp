// prog11_15, �C�|���A���ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   enum mykey	                   // �w�q�C�|���A
   {   
      left,right,middle
   } mouse;		                   // �ŧi�C�|���A�ܼ�
   int key;
   do	      	                   // ��J0~2����
   {
      cout << "Button press?(0)Left (1)Right (2)Middle: ";
      cin >> key;
   } while((key>2)||(key<0));
   mouse=static_cast<mykey>(key);
   switch(mouse)	               // �ھ�key���ȦL�X�r��
   {
      case left:  cout << "Left Button Pressed!" << endl;
                  break;
      case right: cout << "Right Button Pressed!" << endl;
                  break;
      case middle:cout << "Middle Button Pressed!" << endl;
   }
   
   system("pause");
   return 0;
}

// prog8_2, �@���}�C���]��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,a[]={15,6,8};
   int length=sizeof(a)/sizeof(int);   	    // �p��}�C�����Ӽ�
   for(i=0;i<length;i++)  			        // �L�X�}�C�����e
      cout << "a[" << i << "]=" << a[i] << ", ";
   cout << endl << "array a has " << length << " elements"; // �L�Xlength
   system("pause");
   return 0;
}

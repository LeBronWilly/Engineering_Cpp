// prog9_17, �Q�Ϋ��ШD�}�C�����M
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a[3]={5,7,9};
   int i,sum=0;
   int *ptr=a;			        // �]�w����ptr���V�}�Ca
   for(i=0;i<3;i++)
      sum+=*(ptr++);    	    // �}�C�����Ȫ��֥[
   cout << "sum=" << sum << endl;
   
   system("pause");
   return 0;
}

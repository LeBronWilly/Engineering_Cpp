// prog10_5, �򥻸�ƫ��A���ʺA�O����t�m
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
//   int *a;	                             // �ŧiint���A�������ܼ�a
//   a=new int;                            // �t�mint���A���ʺA�O����, �ñN�_�l��}������a�s��
   int *a=new int;
   *a=5;	                             // �N����a�ҫ��V����}�����e�]�Ȭ�5
   cout << "*a=" << *a << endl;	         // �L�Xa�ҫ��V��}�����e
   cout << *a << "*" << *a << "=" << (*a)*(*a) << endl;
   delete a;                             // �������a�ҫ��V���ʺA�O����t�m�ϰ�
   cout << "*a=" << *a << " (����a�Q����O�����A*a=�ݭ�)"<< endl;  // �L�Xa�ҫ��V��}�����e
   a=NULL;						         // �Na���VNULL
   cout << "a=" << a << " (����a�Q�]��NULL��Aa=0)"<< endl;

   system("pause");
   return 0;
}

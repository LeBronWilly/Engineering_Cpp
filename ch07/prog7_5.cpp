// prog7_5, �Ǧ^�Ȭ��ѷ�
#include <iostream>
#include <cstdlib>
using namespace std;
int &max(int &,int &);	     // �ŧi��ƭ쫬�A��Ǧ^�Ȭ��ѷ�
int main(void)
{
   int i=10,j=20;
   max(i,j)=-43;			// �Nmax()��ƶǦ^���ѷӭȭ��]��100
   cout << "i=" << i << ",j=" << j << endl;
   system("pause");
   return 0;
}

int &max(int &a,int &b)
{
   if(a>b)
      return a;
   else
      return b;
}

// prog8_8, �ǻ��G���}�C
#include <iostream>
#include <cstdlib>
using namespace std;
#define LEN 3
#define WID 5
//void show(int [LEN][WID]);				      // ��ƭ쫬���ŧi
inline void show(int a[LEN][WID])            		  // ��ܰ}�C���e 
{  
   for(int i=0;i<LEN;i++)
   {
      for(int j=0;j<WID;j++)
         cout << a[i][j] << " ";
      cout << endl;         
   }
   return;
}

int main(void)
{
   int A[LEN][WID]={{81,52,13,96,27},		  // �ŧi�}�C�ó]�w���
                    {24,23,10,32,16},
					{78} // �᭱4�Ӫťժ��|�H0�N�J 
					};
   show(A);
   
   system("pause");
   return 0;
}



// prog4_5, ���Y�B��l
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i;
   cout << "Input an integer:";
   cin >> i;
   if (i>5)	         	                        // �P�_i>5�O�_����
      cout << i << ">5����" << endl;		    // �L�X�r��
   if (i%2==0) 		                            // �P�_i%2�O�_����0
      cout << i << "������" << endl; 			// �L�X�r��
   if (true)		   	                        // �P�_true�O�_����
      cout << "����û��|�Q����" << endl; 		// �L�X�r��
   system("pause");
   return 0;
}

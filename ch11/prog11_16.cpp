// prog11_16, �C�|�ܼƪ��]��
#include <iostream>
#include <cstdlib>
using namespace std;
enum sports				    // �w�q�C�|���A
{
   tennis,swimming,baseball,ski
} favorite=ski;      	 	// �ŧi�C�|�ܼƨó]��
int main(void)
{
   cout << "favorite=";    	// �L�X�C�|�ܼƩҹ��������e
   switch(favorite)
   {
      case 0:cout << "tennis" << endl;
   	           break;
      case 1:cout << "swimming" << endl;
               break;
      case 2:cout << "baseball" << endl;
  	           break;
      case 3:cout << "ski" << endl;
   }
   
   system("pause");
   return 0;
}

// prog10_7, �ʺA�O����t�m
#include <iostream>
#include <cstdlib>
#include <cstring> 
using namespace std;
char *setString(char *);
int main(void)
{
   char *str;
   str=setString("Hello C++!");   // �N�����ʺA�t�m���r��ǤJ���
   cout << str << "  " << strlen(str)<< " "<< &str << endl;		      // �L�X�r�ꤺ�e
   delete[] str;                  // ����r�ꪺ�ʺA�O����t�m�ϰ�

   system("pause");
   return 0;
}

char *setString(char *text)
{
   char *ptr;
   ptr=new char[strlen(text)+1];  // �ʺA�t�m��A�N��}���w��ptr�s��
   strcpy(ptr,text);    	      // �Ntext�����e�ƻs��ptr
//   ptr=text;
   return ptr;
}

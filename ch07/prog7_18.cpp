// prog7_18, �R�O�C�޼ƪ��ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[]) //�޼ƭӼƻP�޼ƭ�(int��char...) 
{
   int i ;
   cout << "The value of argc is " << argc;  // �L�X�R�O�C�޼ƪ����e
   cout << endl;
   for(i=0;i<argc;i++){
   	if(i==0){
	   cout << "argv[" << i << "]=" << argv[i] << "(�����ɦW�٦r��0)" << endl;
	   }else{
	   cout << "argv[" << i << "]=" << argv[i] << "(�޼Ʀr��"<< i <<")" << endl;
	   }
   }
   cout << "�r���`�ơG" << argc<< "\n";  
   system("pause");
   return 0;
}

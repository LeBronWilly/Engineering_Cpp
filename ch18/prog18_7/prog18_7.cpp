//prog18_7, Ū���G�i����
#include <fstream>   			                  // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   ifstream ifile("c:\\binary.dat",ios::binary);  // �}�ҤG�i����
   double num;
   
   for(int i=1;i<=5;i++)
   {
      ifile.read((char*) &num,sizeof(num));       // �q�G�i���ɤ�Ū�����
      cout << num << endl;   	                  // �L�XŪ�������e
   }   
   cout << "�G�i���ɤw�QŪ���F..." << endl; 
   
   ifile.close();       		                  // �����ɮ�  
   system("pause");
   return 0;
}

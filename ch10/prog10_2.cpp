// prog10_2, �L�X�}�C����}
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int num[3][4]={{0,3,4,9},{3,5,4,6},{7,4,4,8}};	// �ŧi3��4���G���}�Cnum
   char s[3][4]={"LBJ","KD","PG"};

   cout<<"=====int num[3][4]====="<< endl;
   cout << "num=" << num << endl;		  // �L�X��������num����
   cout << "&num=" << &num << endl; 	  // �L�X��������num����}
   cout << "*num=" << *num << endl;       // �L�X��������num�ҫ��V�����Ъ���

   cout << "num[0]=" << num[0] << endl;	  // �L�X���б`��num[0]����
   cout << "num[1]=" << num[1] << endl;   // �L�X���б`��num[1]����
   cout << "num[2]=" << num[2] << endl;	  // �L�X���б`��num[2]����

   cout << "&num[0]=" << &num[0] << endl; // �L�X���б`��num[0]����}
   cout << "&num[1]=" << &num[1] << endl; // �L�X���б`��num[1]����}
   cout << "&num[2]=" << &num[2] << endl; // �L�X���б`��num[2]����}
   
   cout << "*num[0]=" << *num[0] << endl; // �L�Xnum[0][0]����
   cout << "*num[1]=" << *num[1] << endl; // �L�Xnum[1][0]����
   cout << "*num[2]=" << *num[2] << endl; // �L�Xnum[2][0]����
   
   cout<< "\n\n";
   
   cout<<"====char s[3][4]====="<< endl;
   cout << "s=" << s << endl;		  // �L�X��������num����
   cout << "&s=" << &s << endl; 	  // �L�X��������num����}
   cout << "*s=" << *s << endl;       // �L�X��������num�ҫ��V�����Ъ���

   cout << "s[0]=" << s[0] << endl;	  // �L�X���б`��num[0]����
   cout << "s[1]=" << s[1] << endl;   // �L�X���б`��num[1]����
   cout << "s[2]=" << s[2] << endl;	  // �L�X���б`��num[2]����

   cout << "&s[0]=" << &s[0] << endl; // �L�X���б`��num[0]����}
   cout << "&s[1]=" << &s[1] << endl; // �L�X���б`��num[1]����}
   cout << "&s[2]=" << &s[2] << endl; // �L�X���б`��num[2]����}
   
   cout << "*s[0]=" << *s[0] << endl; // �L�Xnum[0][0]����
   cout << "*s[1]=" << *s[1] << endl; // �L�Xnum[1][0]����
   cout << "*s[2]=" << *s[2] << endl; // �L�Xnum[2][0]����

   system("pause");
   return 0;
}

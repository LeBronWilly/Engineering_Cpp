// prog4_9, �޿�B��l
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int score;
   cout << "Input your score:";           	// ����L��J���Z
   cin >> score;
   if ((score<0) || (score>100))
      cout << "Input error!!" << endl;    	// ���Z��J���~
   if ((score<60) && (score>49))
      cout <<"Make up exam!!" << endl;    	// �ݭn�ɦ�
   system("pause");
   return 0;
}

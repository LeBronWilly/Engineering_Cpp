// prog5_9, continue���ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{      
    int i;
    
    for(i=1;i<=10;i++)
    {
       if(i%4==0)
          continue;		// i%4��0�ɥѰj��_�l�B�~�����
       cout << "i=" << i << endl;       
    }
    cout << "when loop interruped,i=" << i << endl;
    system("pause");
    return 0;
}

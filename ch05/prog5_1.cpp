// prog5_1, if-else�ԭz
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{      
    int num=42;
	 if(num%3==0 && num%7==0)
	    cout << num << "�i�H�Q3�P7�㰣" << endl;
    else
       cout << num << "����Q3�P7�㰣" << endl;
    system("pause");
    return 0;
}

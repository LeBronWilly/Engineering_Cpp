// prog5_6, do while�j��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{      
    int n,i=1,sum=0;    
    do{
       cout << "�п�J���֥[���̤j�_�ƭ�:";
       cin >> n;             
    }while(n<1 || n%2==0);

    do{
       sum+=i;
       i+=2;
    }while(i<=n);
    cout << "1+3+...+" << n << "=" << sum << endl;
    
    system("pause");
    return 0;
}

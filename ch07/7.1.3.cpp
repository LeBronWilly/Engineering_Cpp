#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <ctime>
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath>
#include <conio.h>
using namespace std; // �ŧistd�R�W�Ŷ�
unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤlseed(�����ܼ�)
fstream file; // �ŧi�@��fstream(�ɮ׿�X�B��J)����

class LBJ{
	private:

	public:

		LBJ(){ // �w�]�غc

		}

};

int gcd(int &x, int &y, int &z) { //�j��覡(�ϥζǰѦ�) 
    while(y != 0) { 
        z = x % y; 
        x = y; 
        y = z; 
    } 
    z=x;
    return z;
}

int gcd( int x, int y ) //���j�覡(�ϥζǭ�) 
{
    if( y==0 )
        return x;
    return gcd( y, x%y );
}


int lcm(int x, int y, int z) {
    return x * y / gcd(x, y, z);
}

int main(void) { 
    int a, b,g; 
    while (true){
    	printf("��J��ơG"); 
    	scanf("%d %d", &a, &b); 
    	if(a==0 or b==0){
    		cout<<"�_�C�H�ƭȤ��঳0�I\n\n";
    		continue;
		}
   		printf("GCD�G%d\nLCM�G%d\n", gcd(a, b, g), lcm(a, b, g));
    	cout<<"g(�ǰѦ�)="<<g<<"\n\n";
	}
    
    

	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <cstring>
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
float fact(int n){
	if (n>0){
		float tem=1;
		for(int i=1;i<=n;i++){
			tem=tem*i;
		}
		return 1/tem+fact(n-1);
	}else{
		return 0;
	}
}
int main()
{
	srand(seed);
	LBJ king;
	int n;
	cout << "n=";
	cin >> n;
	cout << "n/3 = " << (float)n/3 <<"\n";
	cout << "1/1! + 1/2! + ..... + 1/n! = "<< fact(n);
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


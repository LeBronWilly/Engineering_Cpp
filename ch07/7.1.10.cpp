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
double power(int x,int n){
	double p=1;
	for(int i=1;i<=n;i++){
		p*=x;
	}
	return p;
}
double power(double x,int n){
	double p=1;
	for(int i=1;i<=n;i++){
		p*=x;
	}
	return p;
}

int main()
{
	srand(seed);
	LBJ king;
	int a,n;
	double b;
	cout<< "a=?b=?n=?";
	cin >> a>>b>>n;
	cout<< power(a,n) << " and " << power(b,n);
	
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


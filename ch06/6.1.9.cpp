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
float power(float x,int n){
	float sum=0;
	for(int i=1;i<=n;i++){
		sum+=1/pow(x,i);
	}
	return sum;
}
//float power(float x,int n)
//{
//   float p=1.0f;
//   for(int i=0;i<n;i++)
//      p*=x;
//   return p;
//}
int main()
{
	srand(seed);
	LBJ king;
	float x;
	int n;
	cout<<"Number(n)�G";
	cin>>x;
	cout << "Power(����)(x)�G";
	cin >> n;
	cout<<"1/n + 1/n^2 + 1/^3 +...+ 1/n^x = "<<power(x,n);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


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
double f(double x){
	return 3*pow(x,3)+2*x-1;
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
	double x;
	cout<<"f(x)=3x^3 + 2x - 1�Ax=";
	cin>> x;
	cout<< "f("<< x <<")=" <<f(x);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


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
float fact(float x,int n){
	if (n>0){
		float tem=1;
		for(int i=1;i<=n;i++){
			tem=tem*i;
		}
		return pow(x,n)/tem+fact(x,n-1);
	}else{
		return 1;
	}
}

//int fact(int a)		// �ۭq���fact()�A�p��a!
//{
//   if(a>0)
//      return (a*fact(a-1));
//   else
//      return 1;
//}

//double power(double x,int n)
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
	int n;
	float x;
	cout << "x=";
	cin >> x;
	cout << "n=";
	cin >> n;
	cout << "n/3=" << (float)n/3 <<"\n";
	cout << "x^0/0! + x^1/1! + x^2/2! ..... + x^n/n! = "<< fact(abs(x),abs(n));
	
//   	double sum=0.0;
//   	for(int k=1;k<=10;k++)
//  	    sum+=power(0.1,k)/(fact(k));
//  	cout << "sum=" << sum << endl;	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


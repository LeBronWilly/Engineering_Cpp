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
long long fib(int n){
//	long long tem=0;
	if (n==1 or n==2){
		return 1;
	}else if(n>=3){
		return fib(n-1)+fib(n-2);
	}
//	return tem;
}
int main()
{
	time_t start,end;
	srand(seed);
	LBJ king;
	int n;
	cout <<"                 |        1       , n=1\n";
	cout <<"�O��ƦC�Gfib(n)=|        1       , n=2\n";
	cout <<"                 | fib(n-1)+f(n-2), n>=3\n";
	cout << "n=";
	cin>>n;
	start=time(NULL);
	cout << "fib("<< n << ")=" << fib(n)<<"\n"; 
	end=time(NULL);
	cout<<difftime(end,start)<<"seconds";
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


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
int64_t fact(int n){
	int64_t tem=1;
	int i=n;
	if (n>0){
		do{
			tem*=i;
			i-=1;
		}while(i>0);
		return tem+fact(n-1);	
	}else{
		return 0;
	}
	
//	if (n>0){
//		int tem=1;
//		for(int i=n;i>=1;i--){
//			tem*=i;
//		}return tem+fact(n-1);
//	}else{
//		return 0;
}
int main()
{
	srand(seed);
	LBJ king;
	int n;
	while (true){
		cout<<"n=";
		cin >>n;
		if (n<1){
			cout<<"Idiot! Key right again!\n\n";
			continue;
		}
		cout<<"1! + 2! + 3! +...+ n! = "<< fact(abs(n)) << "\n\n";
	}
	
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


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

double avg(int a, int b=5,int c=7){
	return (a+b+c)/3.0; //�@�w�n���H3.0�A���O3 
}
int main()
{
	srand(seed);
	LBJ king;
//	int a,b,c;
//	cout << "key in 3 nums�G";
//	cin >>a >>b>>c;
	printf("avg(13)=%f\navg(9,16)=%f\navg(8,17,3)=%f\n",avg(13),avg(9,16),avg(8,17,3));
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


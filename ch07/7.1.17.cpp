#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <ctime>
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath>
#include <conio.h>
#define MAX(a,b) ((a==b)?"��Ƥ@�ˤj":(a>b)?"a����j":"b����j")
using namespace std; // �ŧistd�R�W�Ŷ�
unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤlseed(�����ܼ�)
fstream file; // �ŧi�@��fstream(�ɮ׿�X�B��J)����

class LBJ{
	private:

	public:

		LBJ(){ // �w�]�غc

		}

};

int main()
{
	srand(seed);
	LBJ king;
	int a,b;
	cout <<"a=?";
	cin >>a;
	cout <<"b=?";
	cin >>b;
	cout<<MAX(a,b);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


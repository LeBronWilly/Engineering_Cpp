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
float km(register float m){
	return 1.6*m;
}
int main()
{
	srand(seed);
	LBJ king;
	register float m;
	cout << "miles=";
	cin >> m;
	cout << m<<" miles = "<< km(m)<<" kms";
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


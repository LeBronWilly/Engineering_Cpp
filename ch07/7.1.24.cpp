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

int main(int argc, char *argv[])
{
	srand(seed);
	LBJ king;
//	cout<< "����Ϊ��� = " << argv[1]<<"\n";
//	cout<< "����Ϊ��e = " << argv[2]<<"\n";
//	cout<< "����Ϊ��� = " << argv[3]<<"\n";
//	float v=1.0;
//	for(int i=1;i<=3;i++){
//		v*=atof(argv[i]);
//	}
	cout << "�p�Ƭ۰�\n";
	cout<< "�e�ư��H��ƪ��Ӽ� = " << (int)(atof(argv[1])/atof(argv[2]))<<"\n";
	cout<< "�l��(�e��-�Ӽ�*���) = " << atof(argv[1]) - ((int)(atof(argv[1])/atof(argv[2])))*atof(argv[2]);
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


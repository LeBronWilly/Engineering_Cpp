#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <ctime> // �ɶ���Ʈw
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath> // �ƾǨ�Ʈw
#include <conio.h>
#include <algorithm> // �t��k��Ʈw
#include <vector>
#include <iterator>
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
	int *a=new int[3],*b=new int[3],*c=new int[3];
	int max=300,min=100;
	for(int i=0;i<3;i++){
		/* ���� [min , max] ����ƶü� */
  		*(a+i) = rand() % (max - min + 1) + min;
		*(b+i) = rand() % (max - min + 1) + min;
		cout<<"a["<<i<<"]="<<*(a+i)<<"\t"<<"b["<<i<<"]="<<*(b+i)<<endl;
		*(c+i)=*(a+i)+*(b+i);
	}
	cout<<endl;
	delete[] a;
	delete[] b;
	for(int i=0;i<3;i++){
		cout<<"c["<<i<<"]="<<*(c+i)<<endl;
	}
	delete[] c;
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


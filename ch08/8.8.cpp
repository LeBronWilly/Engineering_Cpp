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

int main()
{
	srand(seed);
	LBJ king;
	int a[][3]={{3,2,1},
				{5,6,7},
				{2,4,6}};
	int b[][2]={{2,3},
				{3,4},
				{6,2}};
	int c[3][2]={0};
	
	for(int m=0;m<sizeof(a[0])/sizeof(a[0][0]);m++){      	// m<3
		for(int p=0;p<sizeof(b[0])/sizeof(b[0][0]);p++){   // p<2
			for(int n=0;n<sizeof(c)/sizeof(c[0]);n++){    // n<3
				c[m][p] += a[m][n] * b[n][p]; /*�}�Ca���W�}�Cb,�s�J�}�Cc */
			}
//			printf("%d ", c[m][p]); /*��X�x�}c */
			cout << c[m][p] << " ";
		}
		cout<<"\n"; //���C��X�x�}c 
	}
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


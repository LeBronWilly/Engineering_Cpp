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
	int a[3][4]={{23,3,4,5},{6,8,4,3},{6,10,24,1}};
	int max=0,min=99999;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if (*(*(a+i)+j)<min){
				min=*(*(a+i)+j);
			}
			if(*(*(a+i)+j)>max){
				max=*(*(a+i)+j);
			}
		}
	}
	cout<<"max-min="<<max-min<<endl;
	cout<<"a="<<a<<endl;
	cout<<"a[0]�Ba[1]="<<a[0]<<" "<<a[1]<<endl;
	cout<<"a+1="<<a+1<<endl;
	cout<<"*(a+0)�B*(a+1)="<<*(a+0)<<" "<<*(a+1)<<endl;
	cout<<"*(a+1)+0�B*(a+1)+1="<<*(a+1)+0<<" "<<*(a+1)+1<<endl;
	cout<<"*(*(a+1)+0)�B*(*(a+1)+1)="<<*(*(a+1)+0)<<" "<<*(*(a+1)+1)<<endl;	
	

	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


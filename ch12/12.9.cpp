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
	float weight,width,height;
	LBJ(){ // �w�]�غc
		
	}
	void set(double wg,int w,int h){
		weight=wg;
		width=w;
		height=h;
	}
	void set(double wg){
		weight=wg;
	}
	void set(int w,int h){
		width=w;
		height=h;
	}
	
};

void show(LBJ k){
	cout<<"weight"<<k.weight<<endl;
	cout<<"width="<<k.width<<endl;
	cout<<"height"<<k.height<<endl<<endl;
}

int main()
{
	srand(seed);
	LBJ king,king1;
	king.set(120,80,60);
	king1.set(140);
	king1.set(100,50);
	
	show(king);
	show(king1);
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


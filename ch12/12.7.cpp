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
	float length,width,height;
	LBJ(){ // �w�]�غc
		
	}
	float volume(){
		return length*width*height;
	}
	float area(){
		return 2*(length*width + length*height + width*height);
	}
	void set(float a,float b,float c){
		length=a;
		width=b;
		height=c;
	}
};


int main()
{
	srand(seed);
	LBJ king;
	king.set(23.6,14.8,6.9);
	cout<<"king.set(23.6,14.8,6.9)"<<endl;
	cout<<"king.volume()="<<king.volume()<<endl;
	cout<<"king.area()="<<king.area();
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


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
	 int x;
	 int y;
	 LBJ(int w,int h):x(w),y(h){ 
	 }
	 LBJ(){       // �w�]�غc��
	 	x=10;
	 	y=10;
	 }
	 void area(){
	 	cout<<"���n="<<x*y<<endl;
	 }
	 
};


int main()
{
	srand(seed);
	LBJ king;
	LBJ king2(20,15);
	king.area();
	king2.area(); 
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


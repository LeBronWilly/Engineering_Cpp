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

class CMath{
	private:
//	 int w  
	 /*cl3cl3l3ff*/
	 
	public:
//	 int x
	 
//	 CMath(){ // �w�]�غc��
//		
//		
//		
//	 }
	 void show(){
	 	cout << "ans = "<< compute() <<endl;
	 }
	 
	 virtual int compute()=0;
	 
};

class Cadd : public CMath{
	public:
		int n1,n2;
		
		Cadd(int m,int n):n1(m),n2(n){}
		
		virtual int compute(){
			return n1+n2;
		}
		void show(){
	 		cout << "add(x,y) = "<< compute() <<endl;
	 	}
};

int main()
{
	srand(seed);
	Cadd a1(2,6);
	a1.show();
	
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


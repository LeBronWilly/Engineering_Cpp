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

class Caaa{
	private:
	 
	 
	 
	public:
	 int num1,num2;
	 
	 Caaa(int a,int b):num1(a),num2(b){ // �w�]�غc��
		
	 }
	 
	 Caaa():num1(1),num2(1){ // �w�]�غc��
		
	 }
	 void show(){
			cout<<num1<< " "<< num2<<" from Caaa"<<endl; 
	 }
	 void display(){
	 	printf("Caaa  Printed from Caaa\n");
	 }
	 
};

class Cbbb: public Caaa{
	
	public:
		void set_num(int x, int y){
			num1=x;
			num2=y;
		}
		void show(){
			cout<<num1<< " "<< num2<<" from Cbbb"<<endl; 
		}
		Cbbb(int x,int y):Caaa(x,y){
		}
		Cbbb():Caaa(){
		}
		void display(){
	 		printf("Cbbb  Printed from Cbbb\n");
		}
};


int main()
{
	srand(seed);
	Cbbb obj;
	
	Caaa obj1;
	Caaa obj2(10,15);
	
	Cbbb obj3;
	Cbbb obj4;
	Cbbb obj5(6,23);
	
	
	obj.show();
	obj.set_num(23,6);
	obj.show();
	
	
	cout << "\n\n";
	obj1.show();
	obj2.show();
	
	cout << "\n\n";
	obj3.show();
	obj4.show();
	obj5.show();
	
	cout << "\n\n";
	obj1.display();
	obj3.display();
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


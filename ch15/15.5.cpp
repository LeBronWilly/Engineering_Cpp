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
	 int hour,min;
	 double sec;
	 
	 
	public:
	 
	 
	 LBJ(int h=6 ,int m=13,double s=23.6):hour(h),min(m),sec(s)
	 { // �w�]�غc��
		
		
		
	 }
	 
	 void show_time(){
	 	cout << hour <<"hr "<<min << "min "<< sec << "sec"<<endl;
	 }
	  
	 void set_time(int h,int m,double s){
	 	this->hour=h;
	 	this->min=m;
	 	this->sec=s;
	 }
	 
	 double total_sec(){
	 	return this->hour*60*60 + this->min*60 + this->sec;
	 }
	 
	 int operator>(LBJ &tt){
	 	return (this->total_sec()>tt.total_sec());
	 }
	 
	 int operator<(LBJ &tt){
	 	return (this->total_sec()<tt.total_sec());
	 }
	 
	 
	 
};


int main()
{
	srand(seed);
	LBJ t1(4,23,56.3);
	LBJ t2(5,45,30.3);
	LBJ t3; //(6,13,23.6)
	
	t1.show_time();
	t2.show_time();
	t3.show_time();
	
	cout << (t1<t2) << endl;
	cout << (t3<t2) << endl;
	cout << (t1>t3) << endl;
	cout << (t3>t2) << endl;
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}


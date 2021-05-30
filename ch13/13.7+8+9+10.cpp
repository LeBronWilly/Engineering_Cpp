// prog13_10, �ǻ�����}�C���Ƹ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     void set_member(char i,int w,int h)
     {
        id=i;
        width=w;
        height=h;
     }
     int area(void) 
     {
        return width*height;
     }
     
     static void staticlargest(CWin *win, int n){  // �w�q�R�A���largest
     	int max=0,indexmax;
   		for(int i=0; i<n; i++){
      		if(win[i].area()>max){			        // �P�O���n�O�_��max�٤j
          		indexmax=i;				
          		max=win[i].area();
      		}
    	}
    	cout << "largest window= " << win[indexmax].id << endl;    // �L�Xid����
	 }
	 
	 static float average(CWin w[], int n){
	 	float a=0.0;
	 	for(int i=0;i<n;i++){
	 		a+=w[i].area();
		 }
		return a/float(n);
	 }
	 
	 
	 
	 void smallest(CWin *win, int n){  // �w�q�ͽ˨��smallest
     	int min=999999999,indexmin;
   		for(int i=0; i<n; i++){
      		if(win[i].area()<min){			        // �P�O���n�O�_��min�٤p 
          		indexmin=i;				
          		min=win[i].area();
      		}
    	}
    	cout << "smallest window= " << win[indexmin].id << endl;    // �L�Xid����
	 }		    
};



int main(void)
{
   CWin win[4];
   
   win[0].set_member('A',60,70);
   win[1].set_member('B',40,60);   
   win[2].set_member('C',83,43);   
   win[3].set_member('D',100,45);
   
   CWin::staticlargest(win,sizeof(win)/sizeof(win[0]));                          // �I�slargest()���
   win[2].staticlargest(win,sizeof(win)/sizeof(win[0]));                          // �I�slargest()���
   win[0].smallest(win,sizeof(win)/sizeof(win[0]));

   cout<<"average="<<CWin::average(win,sizeof(win)/sizeof(win[0]));
   
   system("pause");
   return 0;
}

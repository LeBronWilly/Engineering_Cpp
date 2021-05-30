// prog15_5, 使用設定運算子來修正錯誤
#include <iostream>
#include <cstdlib>
#include <cstring> 
using namespace std;
class CWin                              // 定義視窗類別CWin
{
   private:
     char id, *title;
     
   public:     
     CWin(char i='D', char *text="Default window"):id(i)  
     {
        title=new char[50];
        strcpy(title,text);
     }
     void set_data(char i, char *text)
     {
        id=i;
        strcpy(title,text); 
     }   
     void show(void)
     {
        cout << "Window " << id << ": " << title << endl;
     }

     ~CWin(){ delete [] title; }     	// 解構元
     
     CWin(const CWin &win)  			// copy constructor
     {
        id=win.id;
        strcpy(title,win.title);     	// 拷貝建構元
     }
     
     void operator=(const CWin&);  	// 只能夠使用非靜態成員函數定義設定運算子「=」的多載
     
     
//     friend void operator=(const CWin &winX,const CWin &winXX)  	// 不能用友誼函數定義設定運算子「=」的多載
//	 {
//  		winX.id=winXX.id;
// 		strcpy(winX.title,winXX.title);  // 字串拷貝
//	 }
     
};

//void operator=(const CWin &winX,const CWin &winXX)  	// 不能用一般函數去定義設定運算子「=」的多載
//{
//    winX.id=winXX.id;
//    strcpy(winX.title,winXX.title);  // 字串拷貝
//}

void CWin::operator=(const CWin &win)  	// 只能夠使用非靜態的成員函數定義設定運算子「=」的多載
     {
        id=win.id;
        strcpy(this->title,win.title);  // 字串拷貝
     }


int main(void)
{
   CWin win1('A',"Main window"); 	
   CWin win2; 
   
   win1.show(); 
   win2.show();
   
   win1=win2;
   cout << endl << "設定 win1=win2 之後..." << endl;
   win1.show();
   win2.show();
   
   win1.set_data('B',"Hello window");
   cout << endl << "更改 win1的資料成員之後..." << endl; 
   win1.show();
   win2.show();
   
   system("pause");
   return 0;
}

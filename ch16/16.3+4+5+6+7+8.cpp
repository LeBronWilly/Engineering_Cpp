// prog16_1, 繼承的簡單範例
#include <iostream>
#include <cstdlib>
#include <cstring> 
using namespace std;
class CWin                          // 定義CWin類別，在此為父類別
{
   private:
     char id;
     int width,height;
     double kobe;
     
   public:
     CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)  
     {
        cout << "CWin()建構元被呼叫了..." << endl;
     }
     void show_member(void)  	    // 成員函數show_member，用來顯示資料成員的值
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
     friend void show_member2(CWin x)  	    // 友誼函數show_member2，用來顯示資料成員的值
     {
        cout << "Window " << x.id << ": ";
        cout << "width=" << x.width << ", height=" << x.height << endl;
     }
     void set_id(char xx){
     	id = xx;
	 }
};

class CTextWin : public CWin        // 定義CTextWin類別，繼承自CWin類別
{
   private:                  	    // 子類別裡的私有成員text
      char *text;
      
   public:     					    // 子類別裡的公有成員
      CTextWin(char *tx)     		// 子類別的建構元
      {
         cout << "CTextWin()建構元被呼叫了..." << endl; 
         text = new char [strlen(tx)+1];
		 strcpy(text,tx);
      }
      void show_text();			    // 子類別的成員函數show_text(原型)
//      {
//         cout << "text = " << text << endl;
//      }
      void set_text(char *tt)			    // 子類別的成員函數set_text
      {
         text = new char [strlen(tt)+1];
         strcpy(text,tt);
      }
      void set_member(char x,char *y)		// 子類別的成員函數set_member
      {
         text = new char [strlen(y)+1];
         strcpy(text,y);
         set_id(x);
      }
      ~CTextWin()
	  {
	  	delete [] text;
	  }
};

void CTextWin:: show_text()			    // 子類別的成員函數show_text
      {
         cout << "text = " << text << endl;
      }

int main(void)
{
   CWin win('A',50,60); 	   		// 建立父類別的物件
   CTextWin txt("Hello C++");		// 建立子類別的物件

   win.show_member();  			    // 以父類別物件呼叫父類別的函數
   txt.show_member();				// 以子類別物件呼叫父類別的函數
   txt.show_text();				    // 以子類別物件呼叫子類別的函數
   
   cout << "win 物件佔了 " << sizeof(win) << " bytes" << endl; // 24
   cout << "txt 物件佔了 " << sizeof(txt) << " bytes" << endl; // 32
   
   txt.set_text("Python");
   txt.show_member();
   txt.show_text();
   
   txt.set_member('L',"R");
   txt.show_member();
   txt.show_text();
   
   show_member2(win);
   show_member2(txt);
   
   system("pause");
   return 0;
}

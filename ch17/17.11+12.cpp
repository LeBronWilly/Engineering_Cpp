// prog17_7, 抽象類別於多層繼承的應用
#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                        // 定義抽象類別CShape
{
   public:
      virtual int area()=0;  	    // 定義area()為泛虛擬函數
   
      void show_area()     	        // 定義成員函數show_area()
      {
         cout << "area = " << area() << "  from CShape" << endl;
      }
      friend void show_area_friend(CShape win)     	        // 定義成員函數show_area()
      {
         cout << "area = " << win.area() << "  from show_area_friend in CWin" << endl;
      }
};

class CWin : public CShape  	    // 定義由CShape所衍生出的子類別CWin
{
   protected:
     int width, height;
     
   public:
     CWin(int w=10, int h=10)	    // CWin()建構元
     {
        width=w;
        height=h;   
     }
     virtual int area()   
     {
        return width*height;
     }
     void show_area()       
     {
        cout << "CWin物件的面積 = " << area() << "  from CWin" << endl;
     }
};

class CTriWin : public CShape  	    // 定義由CShape所衍生出的子類別CWin
{
   protected:
     int base, height;
     
   public:
     CTriWin(int b=23, int h=6)	    // CWin()建構元
     {
        base=b;
        height=h;   
     }
     virtual int area()   
     {
        return (int)(base*height*0.5);
     }
     void show_area()       
     {
        cout << "CTriWin物件的面積 = " << area() << "  from CTriWin" << endl;
     }        
};

class CCirWin : public CShape       // 定義由CShape所衍生出的子類別CCirWin
{
   protected:
     int radius;
     
   public:
     CCirWin(int r=10)   		   // CCirWin()建構元
     {
        radius=r;
     }
     virtual int area()
     {
        return (int)(3.14*radius*radius);
     }
     void show_area()       
     {
        cout << "CCirWin物件的面積 = " << area() << "  from CCirWin" << endl;
     }   
};

class CMiniWin : public CWin        // 定義由CWin所衍生出的子類別CMiniWin
{
   public:     
     CMiniWin(int w,int h):CWin(w,h){}         // 子類別的建構元
     
     virtual int area()
     {
        return (int) (0.5*width*height);
     }
     void show_area()       
     {
        cout << "CMiniWin物件的面積 = " << area()<< "  from CMiniWin" << endl;
     }       
};

int main(void)
{
   CWin win1(50,60);
   CCirWin win2(100);
   CMiniWin win3(50,60);
   CTriWin win4;
  
   win1.show_area();
   win2.show_area();
   win3.show_area();
   win4.show_area();
   
//   show_area_friend(win1);
//   show_area_friend(win2);
//   show_area_friend(win3);
//   show_area_friend(win4);

   system("pause");
   return 0;
}

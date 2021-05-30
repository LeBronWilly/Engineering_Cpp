// prog17_8, ���~���d��,������ƻP�Ѻc��
#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                           // �w�q��H���OCShape
{
   public:
      virtual int area()=0;            // �w�qarea()���x�������
      void show_area()
      { 
         cout << "area = " << area() << endl;
      }  
      ~CShape()   	                   // ~CShape() �Ѻc�� 
      {
         cout << "~CShape()�Ѻc���Q�I�s�F..." << endl;
         system("pause");
      }          
};

class CWin : public CShape             // �w�q��CShape�ҭl�ͥX���l���OCWin
{
   protected:
     int width, height;
     
   public:
     CWin(int w=10, int h=10):width(w),height(h){} // CWin()�غc��
     
     virtual int area() {return width*height; }
     
     void show_area() {
        cout << "CWin���󪺭��n = " << area() << endl;
     } 
     ~CWin()  		                               // ~CWin() �Ѻc�� 
     {
        cout << "~CWin()�Ѻc���Q�I�s�F..." << endl;
        system("pause");
     }   
};

class CMiniWin : public CWin           // �w�q��CWin�ҭl�ͥX���l���OCMiniWin
{
   public:     
     CMiniWin(int w,int h):CWin(w,h){} // CMiniWin()�غc��
     
     virtual int area() {
        return (int) (0.5*width*height);
     }
     void show_area(){
        cout << "CMiniWin���󪺭��n = " << area() << endl;
     }       
     ~CMiniWin()   	                   // ~CMiniWin() �Ѻc�� 
     {
        cout << "~CMiniWin()�Ѻc���Q�I�s�F..." << endl;
        system("pause");
     }    
};

int main(void)
{
   CShape *ptr=new CWin(50,60);	
   ptr->show_area();
   cout << "�P��CWin����..." << endl;
   delete ptr;
   cout << endl;     
   
   ptr=new CMiniWin(50,50);
   ptr->show_area();
   cout << "�P��CMiniWin����..." << endl;
   delete ptr;   
   cout << endl;
    
   CMiniWin m_win(100,100); 
   m_win.show_area();

   system("pause");
   return 0;
}

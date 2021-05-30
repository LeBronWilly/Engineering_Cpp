// prog17_9, �ϥε����Ѻc��
#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                        // �w�q��H���OCShape
{
   public:
      virtual int area()=0;  		// �w�qarea()���x�������
      virtual void show_area()=0;    	// �w�qshow_area()���������
//      virtual void show_area()    	// �w�qshow_area()���������
//      { 
//         cout << "area = " << area() << " from CShape" <<endl;
//      }
      virtual ~CShape();             // �w�q ~CShape() �������Ѻc�� 
//      {
//         cout << "~CShape()�Ѻc���Q�I�s�F..." << endl;
//      } 
};
CShape::~CShape()             // �w�q ~CShape() �������Ѻc�� 
{
    cout << "~CShape()�Ѻc���Q�I�s�F..." << endl;
}

class CWin : public CShape          // �w�q��CShape�ҭl�ͥX���l���OCWin
{
   protected:
     int width, height;
     
   public:
     CWin(int w=10, int h=10):width(w),height(h){} // CWin()�غc��
     
     virtual int area() {return width*height; }
     
     void show_area() {
        cout << "CWin���󪺭��n = " << area() << endl;
     } 
     ~CWin();  		                // ~CWin() �Ѻc�� 
//     {
//        cout << "~CWin()�Ѻc���Q�I�s�F..." << endl;
//     }   
};
CWin::~CWin()  		                // ~CWin() �Ѻc�� 
{
    cout << "~CWin()�Ѻc���Q�I�s�F..." << endl;
}

class CMiniWin : public CWin        // �w�q��CWin�ҭl�ͥX���l���OCMiniWin
{
   public:     
     CMiniWin(int w,int h):CWin(w,h){}    // CMiniWin()�غc��
     
     virtual int area() {
        return (int) (0.5*width*height);
     }
     void show_area(){
        cout << "CMiniWin���󪺭��n = " << area() << endl;
     }       
     ~CMiniWin();   	                // ~CMiniWin() �Ѻc�� 
//     {
//        cout << "~CMiniWin()�Ѻc���Q�I�s�F..." << endl;
//     }   
};
CMiniWin::~CMiniWin()   	                // ~CMiniWin() �Ѻc�� 
{
    cout << "~CMiniWin()�Ѻc���Q�I�s�F..." << endl;
}

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
   cout << endl;

   system("pause");
   return 0;
}

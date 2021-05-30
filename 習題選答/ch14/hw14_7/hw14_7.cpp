// hw14_7,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
     char id, *title;

   public:
     void show(void)
     {
        cout << "Window " << id << ": " << title << endl;
     }
     CWin(char, char *);
     ~CWin();
};

CWin::CWin(char i='D', char *text="Defaule window"):id(i)
{
    title=new char[strlen(text)+1];
    strcpy(title,text);
}

CWin::~CWin()
{
    cout << "�Ѻc���Q�I�s�F�AWin " << this->id << "�Q�P���F.." << endl;
    delete [] title;
    system("pause");
}

int main(void)
{
   CWin win1('A',"Main window");
   CWin win2('B');

   win1.show();
   win2.show();
   cout << "sizeof(win1)= " << sizeof(win1) << endl;
   cout << "sizeof(win2)= " << sizeof(win2) << endl;

   system("pause");
   return 0;
}

/* output--------------------------
Window A: Main window
Window B: Defaule window
sizeof(win1)= 8
sizeof(win2)= 8
�Ы����N���~�� . . .
�Ѻc���Q�I�s�F�AWin B�Q�P���F..
�Ы����N���~�� . . .
�Ѻc���Q�I�s�F�AWin A�Q�P���F..
�Ы����N���~�� . . .
---------------------------------*/

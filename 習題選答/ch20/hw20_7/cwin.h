// ���Y��cwin.h�A�Ψ��x�sCWin���O���w�q
using namespace std;
class CWin    // �w�qCWin���O�A�b���������O
{
   protected:
     char id;

   public:
     CWin(char i='D'):id(i)   	// �����O���غc��
     {
        cout << "CWin()�غc���Q�I�s�F..." << endl;
     }
     CWin(const CWin& win)    	// �����O�������غc��
     {
        cout << "CWin()�����غc���Q�I�s�F..." << endl;
        id=win.id;
     }
     ~CWin()     				// �����O���Ѻc��
     {
        cout << "CWin()�Ѻc���Q�I�s�F... " << endl;
        system("pause");
     }
};

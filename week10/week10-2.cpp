///week10-2.cpp
#include <iostream>
using namespace std;
///�A��Jclass Cat �A�[�J�j�A���Acodeblocks�L�N�|���A�[�n�U�A���B����
class Mouse{
public:
    void print(){
      cout<<"I am a mouse,mou,mou\n";
    }
};
class Cat{///�ۤv������
public:
    void print(){
    cout<<"I am a Cat,miow miow\n";
    }
};
int main()
{
    Mouse mouse1,mouse2;
    Cat Cat1,Cat2;
    mouse1.print();
    mouse2.print();
    Cat1.print();
    Cat2.print();
}

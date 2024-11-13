///week10-2.cpp
#include <iostream>
using namespace std;
///你輸入class Cat 再加入大括號，codeblocks他就會幫你加好下括號、分數
class Mouse{
public:
    void print(){
      cout<<"I am a mouse,mou,mou\n";
    }
};
class Cat{///自己打跳行
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

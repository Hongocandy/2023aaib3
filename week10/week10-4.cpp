#include <iostream>
#include <string>
using namespace std;
class Cat{
public:
     string name;
     Cat(string _name){///物件建構值constructor(左邊沒有void)
        name = _name;
     }///沒有return 值
     void print(){
       cout<< "My name is "<< name<<".\n";
     }
};
int main()
{///見出cat1,cat2會用建構子，把物件建構出來
    Cat cat1("小白"), cat2("小花");
    cat1.print();
    cat2.print();
}

#include <iostream>
#include <string>
using namespace std;
class Cat{
public:
     string name;
     Cat(string _name){///����غc��constructor(����S��void)
        name = _name;
     }///�S��return ��
     void print(){
       cout<< "My name is "<< name<<".\n";
     }
};
int main()
{///���Xcat1,cat2�|�Ϋغc�l�A�⪫��غc�X��
    Cat cat1("�p��"), cat2("�p��");
    cat1.print();
    cat2.print();
}

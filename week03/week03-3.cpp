
#include<iostream>
#include <string>
using namespace std;///之後不用寫std::string 或std:cin 或std::cout
int main()
{
   string s;
   cout << "請輸入一個很長的字串，中間不要有空格: ";
   cin >> s;
   cout << "字串" << s <<"的長度是" << s.length() << "\n";
   for(int i=0;i<s.length();i++)
   {
       cout << i << ":" <<s[i] << endl; ///wndl 小寫L就是"\n"
   }
}


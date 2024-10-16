///week06-2(a).cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> a;
  int now;
  while(cin >> now)
  {
     a.push_back(now);

     cout << now<<"\n";///先這樣寫
  }///你在小黑輸入時，結束全部輸入Ctrl-z家Enter
}

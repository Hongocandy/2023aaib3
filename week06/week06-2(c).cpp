///week06-2(c).cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> a;
  int now;
  while(cin >> now)
  {
     a.push_back(now);
     sort(a.begin(), a.end());
     int N=a.size();
     if(N%2==1) cout <<a[N/2] << "\n";
     else cout <<(a[N/2-1]+a[N/2])/2 << "\n";
     ///cout << now;///先這樣寫
  }///你在小黑輸入時，結束全部輸入Ctrl-z家Enter
}

//week11-4(b).cpp
#include <iostream>
using namespace std;
int f(int n)
{
  int ans=0;
  while(n>0)
  {
    ans+=n%10;
    n/=10;
  }
  return ans;
}
int main(){
  int n;
  while( cin >> n)
  {
    if(n==0) break;//part1
    n=f(f(f(n)));//part2
    cout << n << "\n";
  }
}

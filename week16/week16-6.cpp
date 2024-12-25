//week16-6.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int T,N;
  cin>>T;//step01
  for(int t=0;t<T;t++)
  {
    cin>>N;
    vector<int>a(N);
    for(int i=0;i<N;i++)
    {
      cin>>a[i];//step01:input

    }
    int ans=0;
    for(int k=0;k<N-1;k++)
    {
      for(int i=0;i<N-1;i++)
      {
        if(a[i]>a[i+1]){
          swap(a[i],a[i+1]);
          ans++;
        }
      }
    }


    cout<<"Optimal train swapping takes "<<ans<<" swaps.\n";
  }//step02:output
}

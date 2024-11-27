//week12-4.cpp
#include <iostream>
using namespace std;
int main()
{
  int T,N,now;
  char c,c2;//Not important!!
  cin>> T;//step01:Input
  for(int t=1;t<=T;t++)//test case t
  {
     cin>>c>>c2>>N;//step01:Input
     for(int i=0;i<N;i++)
     {
       for(int j=0;j<N;j++)
       {
         cin>>now;//step03:for-loop Input
       }
     }
     cout<<"Test #"<<t<< ": Symmetric.\n";
  }//step02:Output
}

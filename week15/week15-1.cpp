//week15-1.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string hello;//step03:string
  int t=1;
  while(cin>>hello)//step01:input
  {
    if(hello=="#")break;

    cout<<"Case "<<t<<": ENGLISH\n";
    t++;//step04:test case t
  }//step02:output
}

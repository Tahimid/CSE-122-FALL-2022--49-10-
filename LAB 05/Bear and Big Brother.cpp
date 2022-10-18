#include<iostream>
using namespace std;
int main()
{
  int a,b,count=0;
  cin>>a>>b;
  for(int i=1;;i++){
  a*=3;
  b*=2;
  count++;
  break;
  }
  cout<<count<<endl;
  return 0;



}

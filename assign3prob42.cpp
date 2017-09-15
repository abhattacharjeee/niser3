#include<iostream>
using namespace std;
int main()
{
float res,base;
int ex;
cout<<"enter base and exponent resp."<<endl;
cin>>base>>ex;
res=1;
for(int i=1;i<=ex;i++)
{
res=res*base;
}
cout<<"THE REQUIRED RESULT IS"<<res<<endl;
return 0;
}

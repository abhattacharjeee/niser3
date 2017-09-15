#include<iostream>
using namespace std;
int main()
{
int n;
int i,fac=1;
cout<<"enter a number"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
fac=fac*i;
}
cout<<"factorial is"<<fac<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int i,j;
for(i=1;i<=n;i++)
{
int flag=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
flag=flag+1;
}
if((flag==2)&&(n%i==0))
{
cout<<i<<endl;
}
}
return 0;
}

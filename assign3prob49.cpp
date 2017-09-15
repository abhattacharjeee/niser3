#include<iostream>
using namespace std;
int main()
{
int n,flag,j,sum=0;
cout<<"enter the value of n"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
flag=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
flag++;
}
if(flag==2)
{
sum=sum+i;
}
}
cout<<"THE SUM IS "<<sum<<endl;
return 0;
}

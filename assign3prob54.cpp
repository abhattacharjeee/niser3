#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cout<<"Enter n to find all the perdect lower than or equals to it"<<endl;
cin>>n;
cout<<"The perfect Numbers between 1-"<<n<<"is"<<endl;
for(i=1;i<=n;i++)
{
int sum=0;
for(j=1;j<i;j++)
{
if(i%j==0)
{
sum=sum+j;
}
}
if(sum==i)
{
cout<<i<<endl;
}
}
return 0;
}

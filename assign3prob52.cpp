#include<iostream>
using namespace std;
int main()
{
int n,arm,digit,num;
cout<<"Enter n"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
num=i;
arm=0;
while(num!=0)
{
digit=num%10;
arm=arm+digit*digit*digit;
num=num/10;
}
if(arm==i)
cout<<i<<endl;
}
return 0;
}


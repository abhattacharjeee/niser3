#include<iostream>
using namespace std;
int main()
{int n,flag;
cout<<"enter n"<<endl;
cin>>n;
cout<<"THE PRIME NUMBERS ARE"<<endl;
for(int i=1;i<=n;i++)
{
flag=0;
for(int j=1;j<=i;j++)
{
if(i%j==0)
flag++;
}
if(flag==2)
cout<<i<<endl;
}
return 0;
}


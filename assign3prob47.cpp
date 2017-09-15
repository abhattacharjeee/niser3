#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"Enter a number to check if it is a prime number"<<endl;
cin>>n;
int flag=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
flag++;
}
if(flag==2)
cout<<"It is a prime number"<<endl;
else
cout<<"It is not a prime number"<<endl;
return 0;
}


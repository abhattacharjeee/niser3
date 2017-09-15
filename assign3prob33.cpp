#include<iostream>
using namespace std;
int main()
{
int n,f,l,s;
cout<<"enter a number"<<endl;
cin>>n;
l=n-(n/10)*10;
while(n>10)
{
n=n/10;
}
f=n;
s=l+f;
cout<<"the sum is "<<s<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int n,l,f;
cout<<"enter a no. to fin it's last digit"<<endl;
cin>>n;
l=n-(n/10)*10;
while(n>10)
{
n=n/10;
}
f=n;
cout<<"First digit is "<<f<<"Last digit is "<<l<<endl;
return 0;
}

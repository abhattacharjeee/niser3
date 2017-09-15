#include<iostream>
using namespace std;
int main()
{
int n,a;
cout<<"Enter a number to find it's no. of digits"<<endl;
cin>>n;
while(n>0)
{
n=n/10;
a++;
}
cout<<"No. of digitsis "<<a<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
float a,b,c;
cout<<"enter three numbers";
cin>>a>>b>>c;
if(a>b && a>c)
{
cout<<a<<" is the largest"<<endl;
}
else if(b>a && b>c)
{
cout<<b<<" is the largest number"<<endl;
}
else if(c>a && c>b)
{
cout<<c<<" is the largest number"<<endl;
}
else
{
cout<<"The no.s are indifferent"<<endl;
}
return 0;
}

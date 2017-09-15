#include<iostream>
using namespace std;
int main()
{
float c,s,p,l;
cout<<"input cost price and sell price"<<endl;
cin>>c>>s;
if(s>c)
{
p=s-c;
cout<<"There is profit and in number it is"<<p<<endl;
}
else if(s<c)
{
l=c-s;
cout<<"There is a loss and in numbers it is"<<l<<endl;
}
else
{
cout<<"THERE IS NO PROFIT OR LOSS"<<endl;
}
return 0;
}

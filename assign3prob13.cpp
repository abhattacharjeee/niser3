#include<iostream>
using namespace std;
int main()
{
int rs,a,b,c,d,e,f,g,h,i;
cout<<"enter an amount"<<endl;
cin>>rs;
a=rs/100;
b=rs-(100*a);
c=b/20;
d=b-(c*20);
e=d/10;
f=e-(e*10);
g=f/2;
cout<<"No. of 100 rs notes is"<<a<<endl;
cout<<"no. of 20 rs. notes is"<<c<<endl;
cout<<"no. of 10 rs notes is"<<e<<endl;
cout<<"no. of 2 rs.  coin is"<<g<<endl;
return 0;
}

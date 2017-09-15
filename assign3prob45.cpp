#include<iostream>
using namespace std;
int main()
{
int hcf,l,h;
cout<<"enter two numbers in ascending order to find g.c.f."<<endl;
cin>>l>>h;
hcf=1;
for(int i=1;i<=h;i++)
{
if((l%i==0)&&(h%i==0))
hcf=i;
}
cout<<"The highest common factor is"<<hcf<<endl;
return 0;
}

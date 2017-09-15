#include<iostream>
using namespace std;
int main()
{
float a,b,c;
int x;
cout<<"enter three sides"<<endl;
cin>>a>>b>>c;
if((a+b>c)&&(b+c>a)&&(a+c>b))
{
x=1;
}
else 
x=0;
if(x==1)
{
cout<<"It's a triangle"<<endl;
}
else
cout<<"It's not a triangle"<<endl;
return 0;
}

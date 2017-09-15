#include<iostream>
using namespace std;
int main()
{
float a,b,c;
cout<<"Enter three sides of a triangle"<<endl;
cin>>a>>b>>c;
if(((a==b)&&(a!=c))||((b==c)&&(b!=a))||((c==a)&&(c!=b)))
{
cout<<"It is aN Isosceles triangle"<<endl;
}
else if((a==b)&&(a==c))
{
cout<<"It is an Equilateral triangle"<<endl;
}
else
cout<<"It is a scalene triangle"<<endl;
return 0;
}

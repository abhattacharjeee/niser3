#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a,b,c;
float d;
float r1,r2;
cout<<"Enter coefficients of x*2,x and the constant term resp."<<endl;
cin>>a>>b>>c;
d=(pow(b,2))-(4*a*c);
if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
cout<<"T he roots are "<<r1<<" and "<<r2<<endl;
}
else if(d==0)
{
r1=-b/(2*a);
r2=r1;
cout<<"The roots are equal and are "<<r1<<" and "<<r2<<endl;
}
else(d<0);
{
cout<<"The rrots are complex"<<endl;
cout<<"THE ROOTS ARE "<<-b/(2*a)<<"+i*"<<(sqrt(-d))/(2*a)<<" and "<<-b/(2*a)<<"-i*"<<(sqrt(-d))/(2*a)<<endl;
}
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int ph,c,m,b,co,total;
float percentage;
cout<<"Enter marks in physics,chem.,mathhematics,biology and comp.science resp."<<endl;
cin>>ph>>c>>m>>b>>co;
total=ph+c+m+b+co;
percentage=(total*100)/500;
if(percentage>=90)
{
cout<<"A grade"<<endl;
}
else if((percentage>=80)&&(percentage<90))
{
cout<<"B grade"<<endl;
}
else if((percentage>=70)&&(percentage<80))
{
cout<<"C grade"<<endl;
}
else if((percentage>=60)&&(percentage<70))
{
cout<<"D grade"<<endl;
}
else if((percentage>=40)&&(percentage<60))
{
cout<<"E grade"<<endl;
}
else 
{
cout<<"F"<<endl;
}
cout<<percentage<<endl;
return 0;
}

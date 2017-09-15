#include<iostream>
using namespace std;
int main()
{
int n;
float c;
float tot;
cout<<"enter no. of units consumed "<<endl;
cin>>n;
if(n<=50)
{
c=n*0.5;
}
else if(n>50 && n<=150)
{
c=50*0.5+(n-50)*.75;
}
else if(n>150 && n<=250)
{
c=(50*0.5+100*0.75+(n-150)*1.2);
}
else
{
c=50*0.5+100*0.75+100*1.2+(n-250)*1.5;
}
tot=c*1.2;
cout<<"total cost is"<<tot<<endl;
return 0;
}


#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter week day number between 1-7"<<endl;
cin>>a;
if(a==1)
{
cout<<"Sunday"<<endl;
}
else if(a==2)
{
cout<<"Monday"<<endl;
}
else if(a==3)
{
cout<<"Tuesday"<<endl;
}
else if(a==4)
{cout<<"Wednesday"<<endl;
}
else if(a==5)
{
cout<<"THURSDAY"<<endl;
}
else if(a==6)
{
cout<<"Friday"<<endl;
}
else if(a==7)
{
cout<<"Saturday"<<endl;
}
else
{
cout<<"YOUR input is wrong"<<endl;
}
return 0;
}

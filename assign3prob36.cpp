#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"enter a number"<<endl;
cin>>num;
int mult=1;
while(num!=0)
{
int a=num%10;
num=num/10;
mult=mult*a;
}
cout<<"multiplication is "<<mult<<endl;
return 0;
}

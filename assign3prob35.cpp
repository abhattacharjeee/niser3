#include<iostream>
using namespace std;
int main()
{
int num;
int sum=0;
cout<<"enter a number"<<endl;
cin>>num;
while(num!=0)
{
sum=sum+(num%10);
num=num/10;
}
cout<<"the sum is "<<sum<<endl;
return 0;
}

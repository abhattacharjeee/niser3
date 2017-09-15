#include<iostream>
using namespace std;
int main()
{
int sum;
int n;
int i;
cout<<"enter a number"<<endl;
cin>>n;
while((i<=n) && ((i%2)==1))
{
sum=sum+i;
i=i+2;
}
cout<<"The sum of odd numbers between 1-n is "<<sum<<endl;
return 0;
}

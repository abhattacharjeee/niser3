#include<iostream>
using namespace std;
int main()
{
int n,i=1;
cout<<"Enter any number to find it's multiplication table"<<endl;
cin>>n;
for(i=1;i<=10;i++)
{
cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
return 0;
}

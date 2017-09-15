#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter two numbers"<<endl;
cin>>a>>b;
int lcm;
int i=max(a,b);
while(((i%a)!=0) || (((i%b)!=0)))
{
i=i+1;
}
cout<<"LCM is "<<i<<endl;
return 0;
}

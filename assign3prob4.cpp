#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter a no. to test"<<endl;
cin>>a;
if(a%5==0 && a%11==0)
{
cout<<a<<" is divisible by both 5 and 11"<<endl;
}
else if(a%5!=0 && a%11==0)
{
cout<<a<<" is not divisible by 5 but divisible by 11"<<endl;
}
else if(a%5==0 && a%11!=0)
{
cout<<a<<" is divisibble by 5 but not by 11"<<endl;
}
else
{
cout<<a<<" is neither divisible by 5 nor 11"<<endl;
}
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int n,num,digit,rev=0;
cout<<"enter a number"<<endl;
cin>>n;
num=n;
do
{digit=num%10;
rev=(rev*10)+digit;
num=num/10;
}
while(num!=0);
if(rev==n)
{
cout<<"It is a palindromic number"<<endl;
}
else
cout<<"It is npt a palindroic number"<<endl;
return 0;
}

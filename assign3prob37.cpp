#include<iostream>
using namespace std;
int main()
{
int a,digit,rev=0;
cout<<"enter a no. "<<endl;
cin>>a;
do
{digit=a%10;
rev=rev*10+digit;
a=a/10;
}
while(a!=0);
cout<<"the reverse of the number is "<<rev<<endl;
return 0;
}


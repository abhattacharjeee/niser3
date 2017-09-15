#include<iostream>
using namespace std;
int main()
{
int n,digit,i,j,fac,num,sum;
cout<<"Enter a number to check if it's a strong number"<<endl;
cin>>n;
num=n;
while(num!=0)
{
digit=num%10;
num=num/10;
fac=1;
j=1;
while(j<=digit)
{
fac=fac*j;
j++;
}
sum=sum+fac;
}
if(sum==n)
cout<<n<<"IS a strong number"<<endl;
else
cout<<n<<" is not a strong number"<<endl;
return 0;
}

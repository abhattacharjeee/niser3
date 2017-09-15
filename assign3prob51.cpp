#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int originalnumber,num,digit,arm=0;
cout<<"entera number to check if its armstrong or not"<<endl;
cin>>originalnumber;
num=originalnumber;
while(num!=0)
{
digit=num%10;
arm=arm+pow(digit,3);
num=num/10;
}
if(arm==originalnumber)
{
cout<<"It's a armstrong number"<<endl;
}
else
cout<<"It is not a armstrong number"<<endl;
return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int octaltodecimal(long long);
int main()
{
long long octal;
cout<<"enter a octal  number to find out it's decimalform"<<endl;
cin>>octal;
cout<<"the decimal form of "<<octal<<" is "<<octaltodecimal(octal)<<endl;
return 0;
}
int octaltodecimal(long long octal) 
{
int decimal=0,digit,i=0;
while(octal!=0)
{
digit=octal%10;
decimal=decimal+digit*pow(8,i);
i++;
octal=octal/10;
}
return decimal;
}


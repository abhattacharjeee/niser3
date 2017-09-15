#include<iostream>
#include<cmath>
using namespace std;
int octaltobinary(long long);
int main()
{
long long octal;
cout<<"enter a octal to find out it's binary form"<<endl;
cin>>octal;
cout<<"The binary form of octal "<<octal<<" is "<<octaltobinary(octal)<<endl;
return 0;
}
int octaltobinary(long long octal)
{
int binary=0,decimal=0,i=0;
while(octal!=0)
{
decimal=decimal+(octal%10)*pow(8,i);
i++;
octal=octal/10;
}
i=1;
while(decimal!=0)
{
binary=binary+(decimal%2)*i;
decimal=decimal/2;
i=i*10;
}
return binary;
}

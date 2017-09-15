#include<iostream>
#include<cmath>
using namespace std;
int binarytodecimal(long long binary);
int main()
{
long long binary;
cout<<"enter a binary number"<<endl;
cin>>binary;
cout<<"The no. is "<<binary<<" in binary system and "<<binarytodecimal(binary)<<" in decimal system"<<endl;
return 0;
}
int binarytodecimal(long long binary)
{
int decimal=0,i=0;
while(binary!=0)
{
decimal=decimal+(binary%10)*pow(2,i);
i++;
binary=binary/10;
}
return decimal;
}

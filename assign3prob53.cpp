#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int sum=0;
for(int i=1;i<n;i++)
{
if(n%i==0)
sum=sum+i;
}
if(sum==n)
cout<<"It's a perfect number:"<<endl;
else
cout<<"It is not a perfect number"<<endl;
return 0;
}

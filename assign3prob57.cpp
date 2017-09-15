#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"Enter the no of terms of fibbionaci series you want"<<endl;
cin>>n;
int a[n];
a[0]=1;
a[1]=1;
cout<<"The fibionacci series is"<<endl;
cout<<"1"<<endl;
cout<<"1"<<endl;
for(i=2;i<n;i++)
{
a[i]=a[i-1]+a[i-2];
cout<<a[i]<<endl;
}
return 0;
}

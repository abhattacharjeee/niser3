#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"entera number to find it's factors"<<endl;
cin>>n;
cout<<"The factors are"<<endl;
for(int i=1;i<n+1;i++)
{
if(n%i==0)
cout<<i<<endl;
}
return 0;
}


#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter month no."<<endl;
cin>>a;
if((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12))
{
cout<<"No. of days is 31"<<endl;
}
else if((a==4)||(a==6)||(a==9)||(a==11))
{
cout<<"No. of days is 30"<<endl;
}
else if(a==2)
{
cout<<"nO. of days is 28"<<endl;
}
else
{
cout<<"No such month exists"<<endl;
}
return 0;
}

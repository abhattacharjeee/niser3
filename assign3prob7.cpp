#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"enter something"<<endl;
cin>>ch;
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
cout<<"Its a alphabet"<<endl;
else
cout<<"it is not a alphabet"<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"entr a character"<<endl;
cin>>ch;
if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
{
cout<<"it is a alphabet"<<endl;
}
else if(ch>=48 && ch<=57)
{
cout<<"It is a digit"<<endl;
}
else
cout<<"it is a special character"<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"enter a char only"<<endl;
cin>>ch;
if(ch>=65 && ch<=90)
{
cout<<"It is an uppercase alphabet"<<endl;
}
else if(ch>=97 && ch<=122)
{
cout<<"I t is a lowercase alphabet"<<endl;
}
else
cout<<"YOU HAVE ENTERED SOMETHING ELSE"<<endl;
return 0;
}

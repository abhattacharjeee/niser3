#include<iostream>
using namespace std;
int main()
{
int a,digit;
cout<<"enter a number"<<endl;
cin>>a;
int i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0;
while(a>0)
{
digit=a%10;
a=a/10;
switch(digit)
{
case 1:
	i++;
break;
case 2:
	j++;
break;
case 3:
	k++;
break;
case 4:
	l++;
break;
case 5:
	m++;
break;
case 6:
	n++;
break;
case 7:
	o++;
break;
case 8:
	p++;
break;
case 9:
	q++;
break;
case 10:
	r++;
break;
}
}
cout<<"frequency of 0 is "<<r<<endl;
cout<<"frequency of 1 is "<<i<<endl;
cout<<"frequency of 2 is "<<j<<endl;
cout<<"frequency of 2 is "<<k<<endl;
cout<<"frequency of 3 is "<<l<<endl;
cout<<"frequency of 4 is "<<m<<endl;
cout<<"frequency of 5 is "<<n<<endl;
cout<<"frequency of 6 is "<<o<<endl;
cout<<"frequency of 7 id "<<p<<endl;
cout<<"frequency of 8 is "<<q<<endl;
cout<<"frequency of 9 is"<<r<<endl;
return 0;
}

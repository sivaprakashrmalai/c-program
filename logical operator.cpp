#include<iostream>
using namespace std;
int main()
{
	cout<<"logical OPERATOR;"<<endl;
	int a,b;
	cout<<"enter the number 1;"<<endl;
	cin>>a;
	cout<<"enter the number 2:"<<endl;
	cin>> b;
	bool c;
	c=(a==b)&&(a!=b);
	cout<<"this condition is :"<<c<<endl;
	c=(a>b)||(a<b);
	cout<<"this condition is :"<<c<<endl;
	c=!(a<=b);
	cout<<"this condition is :"<<c<<endl;
	return 0;
	
	
}

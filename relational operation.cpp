#include<iostream>
using namespace std;
int main()
{
	cout<<"RELATIONAL OPERATOR;"<<endl;
	int a,b;
	cout<<"enter the number 1;"<<endl;
	cin>>a;
	cout<<"enter the number 2:"<<endl;
	cin>> b;
	bool c;
	c=(a==b);
	cout<<"a and b numbers are equal :"<<c<<endl;
	c=(a!=b);
	cout<<"a and b numbers are not equal :"<<c<<endl;
	c=(a<b);
	cout<<"a is less b :"<<c<<endl;
	c=(a>b);
	cout<<"a is greater than b :"<<c<<endl;
	c=(a<=b);
	cout<<"a is less than or equal to b :"<<""<<c<<endl;
	c=(a>=b);
	cout<<"a is greater than or equal to b :"<<c<<endl;
	
}

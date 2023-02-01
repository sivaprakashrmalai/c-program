#include<iostream>
using namespace std;
int main()
{
	cout<<"ASSIGNMENT OPERATOR;"<<endl;
	int a,b;
	cout<<"enter the number 1;"<<endl;
	cin>>a;
	cout<<"enter the number 2:"<<endl;
	cin>> b;
	a+=b;
	cout<<"the addition of two numbers :"<<a<<endl;
    a-=b;
	cout<<"the subtraction of two numbers :"<<a<<endl;
	a*=b;
	cout<<"the multiplication of two numbers :"<<a<<endl;
	a/=b;
	cout<<"the division of two numbers :"<<a<<endl;
	a%=b;
	cout<<"the remainder value of two numbers :"<<a<<endl;
	return 0;
	
}

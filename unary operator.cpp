#include <iostream>
using namespace std;
int main ()
{
	//unary operator :
	int a,b;
	cout<< "ENTER THE VALUES OF A AND B :" << endl ;
	cin>> a >> b ;
	int c=(a++ + b++);
	cout<<"the addition value of pre increment :"<<c<<endl;   //post increment;
	int d=(++a - ++b);
    cout<<"the subtraction value of post increment :"<<d<<endl; //pre increment;
	int e=(--a * --b);
	cout<<"the multiplication value of pre decrement :"<<e<<endl;  //pre decrement;
	int f=(a-- / b--);
	cout<<"the division value of post decrement :"<<f<<endl;   //post decrement;
	int g=(a-b);
	cout<<"the working of two numbers using unary minus operator :"<<g<<endl;   //unary minus;
	return 0;
	
	
}

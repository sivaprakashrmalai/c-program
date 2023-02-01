#include <iostream>
using namespace std;
void area(int l,int b) //function defining;
{ 
    
	int c=l*b; //l_length of the rectangle; b_base of the rectangle;
    cout<<"the area of rectangle :"<<c<<endl;

}
int main()
{
	int l,b;
	cout<<"enter the value of l :"<<endl;
	cin>>l;
	cout<<"enter the value of b :"<<endl;
	cin>>b;
	area(l,b);
	return 0;
}

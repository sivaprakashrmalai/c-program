#include<iostream>
using namespace std;
class triangle
{
	public:
	float area(int a,int b)
	{
    float d=(0.5)*a*b;
	return d;
    }
	int perimeter(int a,int b,int c)
	{
	int e=a+b+c;
	return e;
	}
};
int main()
{
	int a,b,c;
	cout<<"enter the one side of triangle :"<<endl;
	cin>>a;
	cout<<"enter the another side of triangle :"<<endl;
	cin>>b;
	cout<<"enter the base side of triangle :"<<endl;
	cin>>c;
	cout<<endl;	
	triangle maths;
	int d=maths.area(a,b);
	cout<<"the area of triangle is :"<<d<<"sq.units."<<endl;
	cout<<endl;
	int e=maths.perimeter(a,b,c);
	cout<<"the perimeter of triangle is :"<<e<<"units."<<endl;
	cout<<endl;
	return 0;
    
}

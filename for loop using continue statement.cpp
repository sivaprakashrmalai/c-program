#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number"<<endl;
	cin>>a;
	for(a=1;a<=30;++a){
		
		if(a==25){
			cout<<"print numbers"<<"====="<<endl;   //using continue statement; 
			continue;
		}cout<<"print numbetr :"<<a<<endl;
	}
}

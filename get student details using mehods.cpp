#include<iostream>
using namespace std;
class student_details
{
	public:
	char name[50];
	int roll_num;
	char dept[50];
	int marks[50];
	
	void getdetails();
	int printdetails();
	void grade();
};
void student_details::getdetails()
{
	cout<<"Enter your name :";
	cin>>name;
	cout<<"Hello "<<name<<endl;
	cout<<"Enter your roll number :";
	cin>>roll_num;
	cout<<"Enter your department :";
	cin>>dept;
	cout<<"Enter your marks : <<"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"mark "<<i+1<<" = ";
		cin>>marks[i];
	}
}
int student_details::printdetails()
{
	cout<<"----------------------------------"<<endl;
	cout<<"name of the person :"<<name<<endl;
	cout<<"roll number :"<<roll_num<<endl;
	cout<<"department name :"<<dept<<endl;
	int total;
	total=0;
	cout<<"your marks are : "<<endl;
	for(int i=0;i<5;++i)
	{
		cout<<"mark "<< i+1 <<"is "<<marks[i]<<endl;
		total+=marks[i];
	}
	cout<<"total mark you have scored is : "<<total<<endl;
	int average;
	average=total/5;
	cout<<"your average marks is :"<<average<<endl;
	return average;
}
void student_details::grade()
{
	int average=printdetails();
	if(average==100 && average>=90)
	{
		cout<<"very well good "<<name<<"you are getting grade A+"<<endl;
		cout<<"our felicitation !!!"<<endl;
	}
else if (average<90 && average>=75)
{
	cout<<"very good"<<name<<"you are getting Grade B"<<endl;
	cout<<"our felicitation!!!"<<endl;
}
else if(average<75 && average>=50)
{
	cout<<"good"<<name<<" you are getting grade c :"<<endl;
	cout<<"keep practice!!!"<<endl;
}
else if(average<50 && average>=35)
{
	cout<<"worst g=rading "<<name<<"you are getting grade D"<<endl;
	cout<<"do more practice!!!"<<endl;
}
else
{
	cout<<"sorry you have failed in HSE examination";
}
}
int main()
{
    student_details coder;
	coder.getdetails();
	coder.grade();
}

	
	
	
	

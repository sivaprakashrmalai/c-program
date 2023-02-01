#include <iostream>
using namespace std;
int main()
{
   int a;
   cout<<"enter the number"<<endl;
   cin>>a;
   if(a%2==0){
   	goto even;
   }else{
   goto odd;
   }
   even:
   cout<<"the given number is even :"<<endl;
   exit(0);
   odd:
   cout<<"the given number is odd :"<<endl;
   exit(0);
}

//simple calculator to check 
(sum, substraction, multiplication, divide) using switch cases

//source code:

#include<iostream>

using namespace std;

int main()
{

	int a,b;
  
	cout<<"enter  the number ";
	cin>>a;
	
	cout<<"enter the number ";
	cin>>b;
	 
	char op;
	cout<<"enter the valid operation that you want to perform "<<endl;
	cin>>op;
	
	switch(op){
		case '+': cout<<(a+b)<<endl;
		          break;
		case '-': cout<<(a-b)<<endl;
		           break;
		case '*': cout<<(a*b)<<endl;
		          break;
        case '/': cout<<(a/b)<<endl;
		           break;
		default : cout<<"enter a valid operation"<<endl;
		           break;
	}
}

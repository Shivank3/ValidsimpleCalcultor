//calculator 
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the a number ";
    cin>>a;
    cout<<"enter the b number ";
    cin>>b;

    char op;
    cout<<"enter the valid operation that you want to use ";
    cin>>op;

    switch(op)
    {
        case '+': cout<<(a+b)<<endl;
                  break;
        case '-': cout<<(a-b)<<endl;
                  break;
        case '*': cout<<(a*b)<<endl;
                   break;
        case '/': cout<<(a/b)<<endl;
                  break;
        default : cout<<"enter the valid operation ";
    }
}
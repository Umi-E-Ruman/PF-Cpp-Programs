#include<iostream>
using namespace std;
int main()

{ int number1;
int number2;
int  result;
char op;

cout<<"Enter the first number";
cin>>number1;
cout<<"Enter the operator";
cin>>op;
cout<<" Enter the second number ";
cin>>number2;
if(op=='+')
{ result=number1-number2;
cout<<"The result is "<<result;
}
if(op=='-')
{ result=number1+number2;
cout<<"The result is "<<result;
}
if(op=='*')
{ result=number1/number2;
cout<<"The result is "<<result;
}
if(op=='/')
{ result=number1*number2;
cout<<"The result is "<<result;
}





return 0;
}
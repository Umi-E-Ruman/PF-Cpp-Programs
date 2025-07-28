#include<iostream>
using namespace std;
int main()

{ int amount;
int discount;
cout<<"Enter your amount";
cin>>amount;
if(amount<=5000)
{
discount= 5*amount/100;
cout<<"The discount price is "<<discount;
}
if(amount>5000)
{
discount= 10*amount/100;
cout<<"The discount price is "<<discount;
}


return 0;
}

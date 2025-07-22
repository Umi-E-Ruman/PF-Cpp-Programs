#include<iostream>
using namespace std;
int main()
{ int num,th,h,t,u,rem,rem1,sum;

cout<<"enter the  num";
cin>>num;

th=num/1000;
rem=num%1000;
h=rem/100;
rem1=rem%100;
t=rem1/10;
u=rem1%10;

sum=+th+h+t+u;
cout<<" The sum is "<<sum;
return 0;
}



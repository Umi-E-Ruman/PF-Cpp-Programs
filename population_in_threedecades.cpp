#include<iostream>
using namespace std;
int main()

{ int pop;
int  month;
int year;
int fut_pop;


cout<<" Enter the current world population ";
cin>>pop;
cout<<"Enter the monthly birth date  (number of birth per months) ";
cin>>month;
year=month*12;
fut_pop=(year*30)+pop;
cout<<" The population in three decades will be "<<fut_pop;
return 0;
}
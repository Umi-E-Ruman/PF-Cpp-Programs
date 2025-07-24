#include<iostream>
using namespace std;
int main()

{ 

int age, years,moved;
cout<<"Enter the person age";
cin>>age;

cout<<"Enter the nummber of times they moved";
cin>>moved;

years=age/moved+1;
cout<<"Average number of years lived in the same house "<<years;


return 0;
} 
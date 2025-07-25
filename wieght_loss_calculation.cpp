#include<iostream>
using namespace std;
int main()

{ 
string name;
float kilogram,days;

cout<<" Enter the name of the person :";
cin>>name;

cout<<" Enter the target wieght loss in kilograms :";
cin>>kilogram;

days=15*kilogram;
cout<<name<<" Will need "<<days<<" days to lose "<<kilogram<<"kg of wieght by following doctor suggestion";


return 0;
} 
#include<iostream>
using namespace std;
int main()

{ float current;
float  voltage;
float power;
cout<<"Enter voltage (in volts)";
cin>>voltage;
 cout<<"Enter current (in amperes) ";
cin>>current;
power=current*voltage;
cout<<"The power is  "<<power<<"watts";
return 0;
}
#include<iostream>
using namespace std;
int main()

{ float charge;
float  time;
float current;
cout<<"Enter charge (Q) in coulumbs";
cin>>charge;
 cout<<"Enter time(t) in seconds";
cin>>time;
current=charge*time;
cout<<"The current (I)is "<<current<<" amperes";
return 0;
}
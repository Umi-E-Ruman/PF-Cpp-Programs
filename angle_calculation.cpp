#include<iostream>
using namespace std;
int main()

{ 

int sides,angle;
cout<<"Enter the number of sides";
cin>>sides;

angle=(sides-2)*180;

cout<<"The sum of internal angles of a "<<sides<<"-sides polygon is "<<angle;

return 0;
} 
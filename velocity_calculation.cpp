#include<iostream>
using namespace std;
int main()

{ 

int initialVelocity,finalVelocity,time,acceleration;

cout<<" Enter initial velocity :";
cin>>initialVelocity;

cout<<" Enter Accelaration :";
cin>>acceleration;

cout<<" Enter time:";
cin>>time;

finalVelocity=acceleration*time+initialVelocity;
cout<<"Final velocity :"<<finalVelocity;



return 0;

} 
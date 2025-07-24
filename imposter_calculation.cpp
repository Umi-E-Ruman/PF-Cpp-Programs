#include<iostream>
using namespace std;
int main()

{ 

float imposterCount,playerCount,chance;
cout<<"Enter imposter count";
cin>>imposterCount;

cout<<"Enter player count";
cin>>playerCount;
chance=100*imposterCount/playerCount;
cout<<" Chances of bieng imposter "<<int(chance)<<"%";
return 0;
}
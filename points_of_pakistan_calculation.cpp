#include<iostream>
using namespace std;
int main()

{ string name;
int  wins;
int loss;
int draw;
int point;

 
 cout<<"Enter the name of cricket team ";
 cin>>name;
 cout<<"Enter the number of wins  ";
 cin>>wins;
 cout<<"Enter the number of losses ";
 cin>>loss;
 cout<<"Enter the number of draws ";
 cin>>draw;
 point=wins*3+loss*0+draw*1;
 
 cout<<"pakistan has obtained "<<point<<"in the asia tournament";
 return 0;
 
}
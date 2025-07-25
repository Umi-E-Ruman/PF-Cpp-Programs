#include<iostream>
using namespace std;
int main()

{ 

int bag,cost,area, costPerPound,costsqfeet;
cout<<" Enter the size of the fertilizer bag in pounds :";
cin>>bag;

cout<<" Enter the cost of the  bag :";
cin>>cost;

cout<<" Enter the area in square feet that can be covered by the bag :";
cin>>area;

costPerPound=cost/bag;
cout<<"cost of fertilizer per pound :$"<<costPerPound<<endl;

costsqfeet=cost/area;
cout<<"Cost of fertilizing per square foot :$ "<<costsqfeet<<endl;

return 0;
} 
#include<iostream>
using namespace std;
int main()

{ 

float veg, fruit;
int totalVeg,totalFruit,total,rps;
cout<<"Enter vegetable price per kilogram (in coins)";
cin>>veg;

cout<<"Enter fruit price per kilogram (in coins)";
cin>>fruit;

cout<<"Enter total kilograms of vegetable";
cin>>totalVeg;

cout<<"Enter total kilograms of fruit ";
cin>>totalFruit;


total=veg*totalVeg+fruit*totalFruit;
rps=total/1.94;

cout<<"Total earnings in Rupees (Rps)"<<rps;

return 0;
} 
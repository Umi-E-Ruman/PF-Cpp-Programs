#include<iostream>
using namespace std;
int main()

{ 

int width,hieght,squareMeter,noOfWalls;
cout<<"number of square meter you can paint";
cin>>squareMeter;
cout<<"Width of a single wall (in meter)";
cin>>width;
cout<<"hieght of a single wall (in meter)";
cin>>hieght;

noOfWalls=squareMeter/(width*hieght);
cout<<"number of walls you can paint "<<noOfWalls;




return 0;
}
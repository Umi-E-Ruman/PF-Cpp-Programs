#include<iostream>
using namespace std;
int main()
{ int num= 65478,tth,th,h,t,u,rem,rem1,rem2,sq;
cout<<"the  num"<<num<<endl;

tth=num/10000;
rem=num%10000;
th=rem/1000;
rem1=rem%1000;
h=rem1/100;
rem2=rem1%100;
t=rem2/10;
u=rem2%10;
sq=tth*tth;
cout<<"The sq of ten thousand is "<<sq<<endl;
sq=th*th;
cout<<"The sq of thousand is "<<sq<<endl;
sq=h*h;
cout<<"The sq of hundred is "<<sq<<endl;
sq=t*t;
cout<<"The sq of ten is "<<sq<<endl;
sq=u*u;
cout<<"The sq of unit is "<<sq<<endl;


return 0;
}



#include<iostream>
using namespace std;
int main()
{ int num= 65478,tth,th,h,t,u,rem,rem1,rem2,sum;

cout<<"the  num"<<num<<endl;

tth=num/10000;
rem=num%10000;
th=rem/1000;
rem1=rem%1000;
h=rem1/100;
rem2=rem1%100;
t=rem2/10;
u=rem2%10;
cout<<"the reversed no is "<<u<<t<<h<<th<<tth;

return 0;
}







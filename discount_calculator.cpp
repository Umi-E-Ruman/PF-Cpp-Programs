#include<iostream>
using namespace std;
int main()
{ int totalAmount;
int discountAmount;
int discountedAmount;
cout<<"Enter total amount";
cin>>totalAmount;
discountAmount=totalAmount*0.10;
discountedAmount=totalAmount-discountAmount;
cout<<"The discounted amount :"<<discountedAmount;
return 0;
}

#include<iostream>
using namespace std;
int main()
{ int totalAmount;
int discountAmount;
int discountedAmount;
string day;
cout<<"Enter total amount";
cin>>totalAmount;
cout<<"Enter day";
cin>>day;
if (day=="Sunday"||day=="sunday")
{
discountAmount=totalAmount*0.10;
discountedAmount=totalAmount-discountAmount;
cout<<"The discounted amount :"<<discountedAmount;
}
else 
cout<<"sorry discount is not avalible";
return 0;
}

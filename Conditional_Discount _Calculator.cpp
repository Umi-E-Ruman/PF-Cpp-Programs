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
if (totalAmount>5000)
{ if (day=="sunday"||day=="Sunday")
{
discountAmount=totalAmount*0.10;
discountedAmount=totalAmount-discountAmount;
cout<<"The discounted amount :"<<discountedAmount;
}
else
{ discountAmount=totalAmount*0.05;
discountedAmount=totalAmount-discountAmount;
cout<<"The discounted amount :"<<discountedAmount;
}


}
else 
cout<<"The discount is  not avalible ";


return 0;
}


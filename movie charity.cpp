#include<iostream>
using namespace std;
int main()

{ 
string movieName;
int childTicketPrice,adultTicketPrice,childSoldTicket,adultSoldTicket,charity, donation,remainingAmount, totalAmount;

cout<<" Enter the movie name :";
cin>>movieName;

cout<<" Enter the Adult ticket price  :";
cin>>adultTicketPrice;

cout<<" Enter the child  ticket price  :";
cin>>childTicketPrice;

cout<<" Enter the number of adult tickets sold  :";
cin>>adultSoldTicket;

cout<<" Enter the number of child tickets sold  :";
cin>>childSoldTicket;

cout<<" Enter the percentage of amount to be donated to charity  :";
cin>>charity;

cout<<"  movie name :"<<movieName;

totalAmount=adultTicketPrice*adultSoldTicket+childTicketPrice*childSoldTicket;
cout<<"Total amount generated from  ticket sales : "<<totalAmount<<endl;

donation=charity*totalAmount/100;
cout<<"Donation to charity :"<<charity<<endl;

remainingAmount<<totalAmount-totalAmount;
cout<<"Remainig amount after donation :"<<remainingAmount<<endl;



return 0;
} 
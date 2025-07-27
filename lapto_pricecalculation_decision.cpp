#include<iostream>
using namespace std;
int main()

{ int salay=10000;
 int laptopPrice=50000;
 int advanceSalary;
 int months;
  advanceSalary=10000*6/50;
  if(laptopPrice==advanceSalary)
  cout<<"you can buy laptop";
  else
  { months=laptopPrice/5000;
  cout<<" No you cannot buy you need "<<months<<" months salary to buy a laptop";
  }
return 0;
}
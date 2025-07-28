#include<iostream>
using namespace std;
int main()

{ string name1;
 string name2;
  string name3;
  int age1;
  int age2;
  int age3;
 
cout<<"Enter name of younger brother :";
cin>>name1;
cout<<"Enter age  of younger brother :";
cin>>age1;
cout<<"Enter name of middle brother:";
cin>>name2;
cout<<"Enter age of middle brother:";
cin>>age2;
cout<<"Enter name of elder brother:";
cin>>name3;
cout<<"Enter age of elder brother:";
cin>>age3;
if(age1<age2&&age1<age3)
cout<<"The name of younger brother"<<name1;
return 0;
}

#include<iostream>
using namespace std;
int main()

{ string name;
float m_marks;
float I_marks;
float e_marks;
float aggregrate;
 
 cout<<"Enter the student name  ";
 cin>>name;
 cout<<"Enter matriculation marks  ";
 cin>>m_marks;
 cout<<"Enter intermediate marks ";
 cin>>I_marks;
 cout<<"Enter ecat marks ";
 cin>>e_marks;
 aggregrate=(e_marks)/(400)*50+(I_marks)/(550)*40+(m_marks)/(1100)*10;
 
 cout<<"aggregrate score of "<<name<<"is"<<aggregrate;
 return 0;
 
}
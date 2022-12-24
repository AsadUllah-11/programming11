#include<iostream>
using namespace std;
main() 
{
string name;
float sub1,sub2,sub3,sub4,sub5;
cout << "Enter Your Name: ";
cin>>name;
cout << "Enter subject 01 marks: ";
cin>>sub1;
cout << "Enter subject 02 marks: ";
cin>>sub2;
cout << "Enter subject 03 marks: ";
cin>>sub3;
cout << "Enter subject 04 marks: ";
cin>>sub4;
cout << "Enter subject 05 marks: ";
cin>>sub5;
float percentage;
percentage = ((sub1+sub2+sub3+sub4+sub5)/500)*100;
cout << "Your Percentage: ";
cout << percentage;
}

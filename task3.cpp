#include<iostream>
using namespace std;
main() 
{
float initialvelocity;
float time;
float acceleration;
float finalvelocity;
cout<< "Enter Initial Velocity: ";
cin>>initialvelocity;
cout<< "Enter Acceleration: ";
cin>> acceleration;
cout << "Enter Time: ";
cin >> time;
finalvelocity = (acceleration*time) + initialvelocity;
cout << "Final Velocity: ";
cout <<finalvelocity;
}
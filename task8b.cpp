#include<iostream>
using namespace std;
main()
{
int n;
cout << "Enter a Number: ";
cin >> n;
int a1,a2;
a1 = n/10;
a2 = n%10;
int b1,b2;
b1 = a1/10;
b2 = a1%10;
int c1,c2;
c1 = b1/10;
c2 = b1%10;
int d1;
d1 = c1%10;
int sum;
sum = a2 + b2 + c2 + d1;
cout << "Sum: " <<sum;
}






#include<iostream>
using namespace std;
main() 
{
string name;
cout << "Enter Movie Name: ";
cin >>name;
float adultticketprice, childticketprice, adultticketsold, childticketsold, percentage;
cout << "Enter Adult Ticket Price: ";
cin >>adultticketprice;
cout << "Enter Child Ticket Price: ";
cin >>childticketprice;
cout << "Enter Number of Adult Ticket Sold: ";
cin>>adultticketsold;
cout << "Enter Number of Child Ticket Sold: ";
cin>>childticketsold;
cout << "Enter Percentage to Donate: ";
cin>>percentage;
cout << "__________________________________" <<endl;
float total,totaldeduction;
total = (adultticketprice*adultticketsold) + (childticketprice*childticketsold);
totaldeduction = ((percentage/100)*total);
float totalafterdeduction;
totalafterdeduction = total - totaldeduction;
cout << "Total Amount Generated: ";
cout <<total <<endl;
cout << "Amount after donation: ";
cout<<totalafterdeduction;

}

#include<iostream>
using namespace std;
main() 
{
float bagsize, bagcost, areainsquarefeet;
cout << "Enter Bag Size in Pounds: ";
cin >> bagsize;
cout << "Enter cost of the bag: ";
cin >> bagcost;
cout << "Enter area covered by each bag in square feet: ";
cin>> areainsquarefeet;
cout << "______________________________________" <<endl;
float costperpound, costarea;
costperpound = bagcost/bagsize;
cout << "Cost of the ferilizer per pound: ";
cout <<costperpound <<endl;
costarea= bagcost/areainsquarefeet;
cout << "Cost of fertilizing the area per square feet: ";
cout << costarea;

}
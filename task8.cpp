#include<iostream>
using namespace std;
main() 
{
float vegprice, fruitprice;
int kgveg, kgfruits;
cout <<"Enter Vegetable Price per kilogram: ";
cin >>vegprice;
cout <<"Enter Fruit Price per kilogram: ";
cin >> fruitprice;
cout <<"Enter total kilograms of vegetables: ";
cin>>kgveg;
cout <<"Enter total kilograms of fruits: ";
cin>>kgfruits;
float vegcost,fruitcost;
vegcost = vegprice*kgveg;
fruitcost = fruitprice*kgfruits;
{cout <<"Vegetable cost: ";
cout<<vegcost;
cout<<" coins";
cout<<endl;}
{cout <<"Fruits cost: ";
cout<<fruitcost;
cout<<" coins";
cout<<endl;}
float total1 = vegcost + fruitcost;
float total;
total = ((1/1.94)*total1);
cout <<"Total: ";
cout <<total;
cout <<" Rps";
}

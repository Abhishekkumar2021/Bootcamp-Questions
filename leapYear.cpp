#include<iostream>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int year;
	cout<<"Enter a year you want to check that it is a leap year or not!\n";
    cin>>year;
    if(year%400==0)
    	cout<<"Yeh! it is a leap year\n";
    else if(year%100==0)
    	cout<<"Ohh! it is not a leap year\n";
    else if (year%4==0)
    	cout<<"Yeh! it is a leap year\n";
    else 
    	cout<<"Ohh! it is not a leap year\n";
}
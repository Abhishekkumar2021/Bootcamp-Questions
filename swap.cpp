#include<iostream>
using namespace std;
int main(){
	int a = 10;
	int b = 20;
	cout<<"Before swapping"<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout<<"After swapping"<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;
}
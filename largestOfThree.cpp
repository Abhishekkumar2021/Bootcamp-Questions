#include<iostream>
using namespace std;
int main(){
	
	int a,b,c;
	cout<<"Please enter three numbers."<<endl;
	cin>>a>>b>>c;
	int max = a;
	if(max < b)
		max = b;
	if(max < c)
		max = c;
	cout<<"The maximum of the given numbers is : "<<max;
}
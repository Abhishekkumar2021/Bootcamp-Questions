#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Entr the number to check whether it is prime or not!"<<endl;
	cin>>n;
	bool isPrime = true;
	for(int i=2; i<n; i++){
       if(n%i==0)
       	isPrime = false;
	}
	if(n==1)
		cout<<"The number is neither prime nor composite"<<endl;
	else if(isPrime)
		cout<<"The number is prime.";
	else 
		cout<<"The number is not prime.";

}
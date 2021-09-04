#include<iostream>
using namespace std;
int main(){
	
	int N;
	cout<<"Enter how much terms you want to see of the fibonacci series"<<endl;
	cin>>N;
	int first = 1;
	int second = 0;
	for(int i = 0; i < N; i++){
		if(i==0)
			cout<<0<<" ";
         if(i==1)
         	cout<<1<<" ";
         int temp = second + first;
         second = first;
         first = temp;
         cout<<temp<<" ";
	}
}
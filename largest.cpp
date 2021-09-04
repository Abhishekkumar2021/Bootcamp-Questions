#include<iostream>
using namespace std;
int Max(int arr[], int n){
	int max = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i]>max)
			max = arr[i];
	}
	return max;
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cout<<"Enter the number of elements you want to put in the array\n";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int max = Max(arr,n);
	
	for(int i=0; i<n; i++){
		if(arr[i]==max)
			arr[i] = -1000;
	}
	cout<<"The second largest number is : "<<Max(arr,n);

}
	
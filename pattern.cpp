#include<iostream>
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cout<<"Entr the level of pyramid you want!"<<endl;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<2*n; j++){
			if(j>=n-i && j<=n+i)
				cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int camelCase(string s){
	int count = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i]>='A' && s[i]<'Z')
			count++;
	}
	return count+1;
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
  string s;
  cout<<"Enter the string"<<endl;
  cin>>s;
  cout<<"The number of words involved in your string are : "<<camelCase(s)<<endl;
}

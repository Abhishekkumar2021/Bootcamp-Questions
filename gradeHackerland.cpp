#include<iostream>
using namespace std;

void roundGrades(int grades[],int n){
	for(int i =0; i<n; i++){
		if(grades[i]>37){
			int x = grades[i]/5;
			x++;
			if(5*x-grades[i]<3)
				grades[i] = x*5;
		}
	}
}
int main(){
	
	int n;
	cout<<"Enter number of students \n";
	cin>>n;
	int grades[n];
	cout<<"Enter marks for each of the student";
    for(int i=0; i<n; i++)
    	cin>>grades[i];
    roundGrades(grades,n);
    cout<<"The grades after round off : \n";
    for(int i=0; i<n; i++)
    	cout<<grades[i]<<endl;

}
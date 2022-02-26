//Reverse the array

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	
	int b[n];
	for (int j=0;j<n;j++){
		b[j]=a[n-1-j];
	}
	// printing the reverse array
	for(int k=0;k<n;k++)
	{
		cout<<b[k]<< " ";
	} 
	return 0;
}

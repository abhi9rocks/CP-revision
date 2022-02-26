//Find greatest and smallest element in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	int temp=0;
	
	for(int i=1;i<n;++i){
		
		if(a[0]<a[i])
			a[0]=a[i];
			
	}
	cout<<"The greatest number is "<< a[0];
return 0;
}

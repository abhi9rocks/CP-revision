//move negative elements on one side of the array

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//int p=sizeof(a) / sizeof(a[0]); //basically returnsa the size of the array
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<endl<<a[i]<<" ";
	}
	return 0;
}

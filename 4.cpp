//0's 1's and 2's

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int p=sizeof(arr) / sizeof(arr[0]);
	sort(arr,arr + p); //basic sorting of an array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	//cout<<endl<<"kth largest is"<<arr[n-k];
	return 0;
}

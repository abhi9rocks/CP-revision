//Kth max and min element in an array

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int p=sizeof(arr) / sizeof(arr[0]);
	sort(arr,arr + p);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"kth largest is"<<arr[n-k];
	return 0;
	
}

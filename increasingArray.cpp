	#include<iostream>
	using namespace std;

	long long int makeArrayIncreasing(long long int* arr,int n){	
		long long int minMoves=0;
		for(int i=1;i<n;i++){
			if(arr[i]<arr[i-1]){
				minMoves+=(arr[i-1]-arr[i]);
				arr[i]=arr[i-1];
			}
		}
		//for(int i=0;i<n;i++){
		//	cout<<arr[i]<<" ";
		//}	
		return minMoves;
	}
	int main(){
		int n;
		cin>>n;
		long long int *arr=new long long int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<makeArrayIncreasing(arr,n);
	}

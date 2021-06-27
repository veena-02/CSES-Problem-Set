	#include<bits/stdc++.h>

	using namespace std;
	int main(){
		int n;
		cin>>n;
		long long int *arr=new long long int[n];
	
		long long int sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		long long int minm=LONG_MAX;
		for(int i=1;i<(1<<n);i++){
			long long int total=0;
			long long int diff=0;
			int j=n-1;
			int tempi=i;
			while(tempi>0){
				if(tempi&1){
					total+=arr[j];	
				}
				j--;
				tempi=tempi>>1;
			}
			diff=abs(total-(sum-total));
			minm=min(diff,minm);	
		}
		cout<<minm;
	}

	#include<iostream>
	using namespace std;
	int main(){
		int n;
		cin>>n;
		int arr[n+1]={0};
		for(int i=0;i<n-1;i++){
			int x;
			cin>>x;
			arr[x]=1;
		}
		for(int i=1;i<=n;i++){
			if(arr[i]==0){cout<<i<<endl;break;}
		}
		return 0;
	}

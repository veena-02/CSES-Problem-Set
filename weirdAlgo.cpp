	#include<iostream>
	using namespace std;
	int main(){
		long long int n;
		cin>>n;
		cout<<n<<" ";
		while(n!=1){
			if((n&1)==0){
				//even no.
				n=(n>>1);
				cout<<n<<" ";			
			}
			else{
				//odd no.
				n=3*n+1;
				cout<<n<<" ";
			}
		}
		return 0;
	}

	#include<iostream>
	using namespace std;
	#define ll long long int 
	
	void permutations(ll n, ll *arr){
		int odd,even;
		if((n&1)==1){odd=n;even=n-1;}
		else {odd=n-1;even=n;}
		int i,a,b;
		for(i=0,a=1;a<=odd;i++,a+=2){
			arr[i]=a;
		}
		for(i,b=2;b<=even;i++,b+=2){
			arr[i]=b;
		}
	}

	int main(){
		int n;
		cin>> n;
		ll a[n]={1};
		if(n==2 or n==3)cout<<"NO SOLUTION";
		else if(n==4)cout<<2<<" "<<4<<" "<<1<<" "<<3;
		else{
			permutations(n,a);
			for(int i=0;i<n;i++){
				cout<<a[i]<<" ";
			}
		}
	}

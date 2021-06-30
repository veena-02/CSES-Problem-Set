	#include<bits/stdc++.h>
	using namespace std;

	void graycode(int n,vector<bitset<16>> &v){
		if(n==1){
			bitset<16> bset(0);
			bitset<16> bset1(1);
			v[0]=bset;
			v[1]=bset1;
			return;
		}
		graycode(n-1,v);
		int size=(1<<(n-1));
		//cout<<"v len = "<<l<<"  at n="<<n<<endl;
		for(int i=size-1;i>=0;i--,size++){
			bitset<16> temp;
			temp=v[i];
			temp[n-1]=1;
			//cout<<n<<" "<<i<<" "<<v[i]<<" "<<temp<<endl;
			v[size]=temp;		
		}

	}

	int main(){
		int n;
		cin>>n;
		int l=1<<n;
		vector<bitset<16>> v(1<<n);
		graycode(n,v);
		for(auto x:v){
			for(int i=n-1;i>=0;i--){
				cout<<x[i];
			}
			cout<<endl;
		}
	}
	


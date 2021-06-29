	#include<iostream>
	#include<vector>
	#define ll long long int	
	using namespace std;
	vector<pair<ll,ll>> v;
	ll count=0;

	void towerOfHanoi(int n, int A, int B, int C ){
		if(n>0){
			towerOfHanoi(n-1,A,C,B);
			v.push_back(make_pair(A,C));
			count++;
			towerOfHanoi(n-1,B,A,C);
		}	
	}

	int main(){
		int n;
		cin>>n;
		int A=1;
		int B=2;
		int C=3;
		towerOfHanoi(n,A,B,C);
		cout<<count<<endl;
		for(auto x:v){
			cout<<x.first<<" "<<x.second<<endl;
		}
		return 0;
	}

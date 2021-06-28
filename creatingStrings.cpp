	#include<bits/stdc++.h>
	using namespace std;
	
	void permute(string s, vector<string> &ans, int& cnt){
		sort(s.begin(),s.end());
		do{
			ans.push_back(s);
			cnt++;
		}while(next_permutation(s.begin(),s.end()));
	}

	int main (){
		string s;
		cin>>s;
		vector<string> ans;
		int count=0;
		permute(s,ans,count);
		cout<<count<<endl;
		for(auto x:ans){
			cout<<x<<endl;
		}
	}

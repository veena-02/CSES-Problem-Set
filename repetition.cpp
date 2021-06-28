	#include<iostream>
	using namespace std;
	int main(){
		string s;
		cin>>s;
		int mx=0;
		int n=s.length();
		for(int i=0;i<n;i++){
			int rep=1;
			while((i+1)<n and s[i+1]==s[i] ){
				rep++;
				i++;
			}
			mx=max(mx,rep);
		}
		cout<<mx;
	}

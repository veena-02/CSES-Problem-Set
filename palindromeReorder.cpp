	#include<bits/stdc++.h>
	using namespace std;
	int main(){
		string s;
		cin>>s;
		vector<int> v(26,0);
		int n=s.length();
		for(int i=0;i<n;i++){
			v[s[i]-'A']++;
		}
		string p="";
		char odd;
		bool od=false;
		bool flag=false;
		for(int i=0;i<26;i++){
			char ch;
			ch=i+'A';
			if(v[i]%2!=0 and flag==false){
				if(od==false){od=true;odd=ch;v[i]--;}
				else{cout<<"NO SOLUTION";flag=true;}	
			}
			if(v[i]%2==0 and flag==false){
				//cout<<ch<<" "<<v[i]<<endl;
				int t=v[i]/2;
				while(t--){
					p+=ch;
				}
			}
		}
		if(flag==false){
			for(int i=0;i<p.length();i++){
				cout<<p[i];
			}
			if(od==true)cout<<odd;
			for(int i=p.length()-1;i>=0;i--){
				cout<<p[i];
			}
		}
	}

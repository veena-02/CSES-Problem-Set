	#include<bits/stdc++.h>
	using namespace std;

	void printGrayCode(int n){
		int prev;
		int next;
		bool skip=false;
		int skipped;
		for(int i=0;i<(1<<n);i++){
			if(skip==true){
				i=skipped;
			}
			if(i!=0 and __builtin_popcount(prev^i)!=1){
				skip=true;
				skipped=i;
				i++;
			}
			int tempi=i;
			string stemp(n,'0');
			for(int tempi=i,j=n-1; (tempi>0); j--){
				if((tempi & 1) == 1){
					stemp[j]='1';
				}
				tempi=(tempi>>1);
			}
			cout<<stemp<<endl;
			prev=i;
			if(skip==true){i++;skip=false;}
		}
	}

	int main(){
		int n;
		cin>>n;
		printGrayCode(n);
	}

	#include<iostream>
	using namespace std;
	#define N 8
	char arr[N][N];
	
	bool isValid(int row,int col){
		//Check for * obstacles
		if(arr[row][col]=='*')return false;

		//Check if no column has same row
		for(int i=0;i<col;i++){
			if(arr[row][i]=='$')return false; 
		}

		//Check if there is no left upper diagonal attackiong position
		for(int i=row-1,j=col-1; (i>=0 and j>=0) ; i--,j--){
			if(arr[i][j]=='$')return false;
		}

		//Check if there is no left lower diagonal attacking positions
		for(int i=row+1,j=col-1; (i<N and j>=0) ;i++,j--){
			if(arr[i][j]=='$')return false;
		}
		return true;
		
	} 
	void nQueenHelper(int& output,int col){
		if(col>=N){output++;return;}
		else{
			for(int row=0;row<N;row++){
				if(isValid(row,col)){
					arr[row][col]='$';
					nQueenHelper(output,col+1);
					arr[row][col]='.';
				}
			}
		}
	}
	int nQueen(){
		int output=0;
		nQueenHelper(output,0);
		return output;
	}

	int main(){
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>arr[i][j];
			}
		}
		cout<<nQueen();
	}


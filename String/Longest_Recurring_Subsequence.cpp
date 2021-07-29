#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int t[n+1][n+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0){
				t[i][j]=0;
			}
			else if(s[i-1]==s[j-1] && i != j){
			    t[i][j]=1+t[i-1][j-1];
			}
			else{
				t[i][j]= max(t[i][j-1],t[i-1][j]);
			}
		}
	}
	cout<<t[n][n];
	return 0;
    
}

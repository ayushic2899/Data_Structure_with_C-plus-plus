#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1="ABCDE";
	string s2="CDEAB";
	int l1=s1.length();
	int l2=s2.length();
	if(l1 != l2){
		cout<<"No";
	}
	else{
		string temp=s1+s2;
		if(temp.find(s2)){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
	}
	return 0;
}

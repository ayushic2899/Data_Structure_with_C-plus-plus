#include<bits/stdc++.h>
using namespace std;

int main(){
	string s="ayuishi";
	map<char,int>mp;
	for(int i=0;i<s.length();i++){
		mp[s[i]]++;
	}
	for(auto it : mp){
		if(it.second > 1){
			cout<<it.first<<" "<<it.second<<endl;
		}
	}
	 
}

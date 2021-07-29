#include<bits/stdc++.h>
using namespace std;

void fun(string t,int i,int n,string s){
	if(i==n){
		cout<<t<<endl;
	}
	else{
	    fun(t,i+1,n,s);
	    t=t+s[i];
	    fun(t,i+1,n,s);	
	}
	 
}
int main(){
	string s;
	cin>>s;
	fun("",0,s.length(),s);
	return 0;
}

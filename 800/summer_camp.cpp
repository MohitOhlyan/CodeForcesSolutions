#include<bits/stdc++.h>
using namespace std; 
int main(){
	string s = "1";

	for(int i = 2;i<=1000;i++){
		s = s+ to_string(i);
	}
	
	int n; 
	cin>>n; 

	cout<<s[n-1];
}

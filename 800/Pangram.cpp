#include<bits/stdc++.h>
using namespace std;
int main()

{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	int count = 0;
	
	if(n<26){
		cout<<"NO"<<endl;
		
	}
	else if(n>=26){
		for(int i= 65;i<=90;i++){
			for(int j= 0;j<n;j++){
				if(s[j] >= 97 && s[j] <= 122){
					s[j] = s[j] - 32;
					
				}
				if(s[j] == i){
					count++;
					break;
				}
			}
		}
		if(count == 26){
		cout<<"YES"<<endl;
	}
	else if(count<26){
		cout<<"NO"<<endl;
	}
}
	}
	


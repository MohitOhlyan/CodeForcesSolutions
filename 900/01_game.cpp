/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	int n = s.length();
    	if(n%2 == 1){
    		n = n-1;
    	}
    	int pair = 0;
    	int one = 0,zero = 0;
    	for(int i = 0;i<n-1;i++){
    		if(s[i] == '0' && s[i+1] != '0'){
    			pair++;
    		}
    		else if(s[i] == '1' && s[i+1] != '1'){
    			pair++;
    		}
    	}
    	
    	cout<<pair<<endl;
    	if(pair%2 == 1 && pair !=0){
    		cout<<"DA"<<endl;
    	}
    	else{
    		cout<<"NET"<<endl;
    	}
    }
    return 0;
}
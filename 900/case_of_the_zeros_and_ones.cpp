/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int one = 0,  zero = 0;
    cin>>n;
    string s;
    cin>>s;
    for(long unsigned int i = 0;i<s.length();i++){
    	if(s[i]-'0' == 0){
    		zero++;
    	}
    	else if(s[i] - '0' ==1){
    		one ++;
    	}
    }
    // cout<<one<<" "<<zero<<endl;
    if(zero == one){
    	cout<<0<<endl;
    }
    else if(zero>one){
    	cout<<n - (2*one)<<endl;
    }
    else if(one>zero){
    	cout<<n - (2*zero)<<endl;
    }
    return 0;
}
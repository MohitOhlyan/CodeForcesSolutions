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
    for(int i = 0;i<t;i++){
    	int n;
    	cin>>n; 

    	if( n%4 == 0){
    		cout<<"YES"<<endl;
    	}
    	else {
    		cout<<"NO"<<endl;
    	}
    }

    return 0;
}
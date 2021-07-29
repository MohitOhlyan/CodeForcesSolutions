/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    bool ans = false;
    for(auto i =  0 ;i<(int)s.length();i++){
    	if(s[i] == 'H'){

    		cout<<"YES"<<endl;
    		ans = false;
    		break;
    	}
    	else if(s[i] == '9'){
    		cout<<"YES"<<endl;
    		ans = false;
    		break;
    	}
    	else if(s[i] == 'Q'){
    		cout<<"YES"<<endl;
    		ans = false;
    		break;
    	}
    	else{
    		ans = true;
    	}

    }
    if (ans== true )
    	cout<<"NO"<<endl;
    return 0;
}
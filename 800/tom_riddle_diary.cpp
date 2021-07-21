#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n; 
    vector<string> s; 
    vector<int> ans; 

    for(int i  =0;i<n;i++){
    	string temp; 
    	cin>>temp; 
    	s.push_back(temp);
    }

    for(int i = 0;i<n-1;i++){
    	for( int j = i+1;j<n;j++){
    		if(s[i] == s[j]){
    			ans.push_back(j);
    		}
    	}
    	
    }

    for(unsigned int i = 0;i<s.size();i++){
    	s[i] = {"NO"};
    }
    for(unsigned int i = 0;i<ans.size();i++){
    	s[ans[i]] = {"YES"};
    }
    for(unsigned int i = 0;i<s.size();i++){
    	cout<<s[i]<<endl;
    }
}
/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin>>n; 

	vector<int> v;
	// vector<int>:: iterator it, it1;

    for(int i = 0;i<n;i++){
    	int temp; 
    	cin>>temp; 
    	v.push_back(temp); 
    }
    int count1 = 0,count2 = 0;

    for(unsigned int i = 0;i<n;i++){
    	if(i%2 == 0){
    		if(v[0] > v[v.size()-1]){
    			count1 = count1 + v[0]; 
    			v.erase(v.begin());
    		}
    		else{
    			count1 = count1 + v[v.size()-1];
    			v.erase(v.end()-1);
    		}

    	}
    	else {
    		if(v[0]>v[v.size()-1]){
    			count2 = count2 + v[0];
    			v.erase(v.begin());
    		}
    		else{
    			count2 = count2+ v[v.size()-1];
    			v.erase(v.end()-1);
    		}
    	}
    }


    cout<<count1<<" "<<count2<<endl;
    // cout<<v.size()<<endl;
    return 0;
}
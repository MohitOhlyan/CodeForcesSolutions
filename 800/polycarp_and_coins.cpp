#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t; 
    while(t>0){
    	long long int n; 
    	cin>>n; 

    	for(long long int i = n/3-1;i<=(n/3) + 1;i++){
    		if(i + 2*i == n){
    			cout<<i<<" "<<i<<endl;
    			break;
    		}
    		else if(i + 2*(i+1) == n){
    			cout<<i<<" "<<i+1<<endl;
    			break;
    		}
    		else if(i+ 2*(i-1) == n){
    			cout<<i<<" "<<i-1<<endl;
    			break;
    		}

    	}
    	t--;
    }
}
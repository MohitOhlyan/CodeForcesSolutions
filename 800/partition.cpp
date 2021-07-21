#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin>>n; 
    int sum1 = 0,sum2 = 0;
    vector<int> v;
    for(int i = 0;i<n;i++){
    	int temp; cin>>temp; 
    	if(temp >0){
    		sum1 = sum1 + temp;
    	}
    	else if(temp <=0){
    		sum2 = sum2 + temp;
    	}
    }

    cout<<sum1 - sum2;



}
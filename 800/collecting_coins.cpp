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
    	vector<int> a(3);
    	for(int i = 0;i<3;i++){
    		cin>>a[i];
    	}
    	int n;
    	cin>>n;

    	sort(a.begin(),a.end());

    	int temp; 
    	temp = a[2] - a[1]; 
    	temp = temp+ (a[2] - a[0]); 
    	if(n<temp){
    		cout<<"NO"<<endl;
    	}
    	else if(n == temp){
    		cout<<"YES"<<endl;
    	}
    	else if(n>temp){
    		if((n-temp)% 3 == 0){
    			cout<<"YES"<<endl;

    		}
    		else if((n-temp)%3 != 0){
    			cout<<"NO"<<endl;
    		}
    	}

    }
    return 0;
}
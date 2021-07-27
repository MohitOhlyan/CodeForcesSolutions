/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n; 
    int  v[11][11];
    for(int i = 0;i<n;i++){
    	v[i][0] = 1;
    }
    for(int j = 0;j<n;j++){
    	v[0][j] = 1; 
    }

    for(int i = 1;i<n;i++){
    	for(int j = 1;j<n;j++){
    		v[i][j] = v[i-1][j] + v[i][j-1];
    	}
    }
    // for(int i = 0;i<n;i++){
    // 	for(int j = 0;j<n;j++){
    // 		cout<<v[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }
    cout<<v[n-1][n-1]<<endl;
    return 0;
}
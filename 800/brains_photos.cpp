/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    char a;
    // char a[101][101];
    // for(int i = 0;i<n;i++){
    // 	for(int j = 0;j<n;j++){
    // 		cin>>a[i][j];

    // 	}
    // }
    int count = 0;

    for(int i = 0;i<n*m;i++){
    	cin>>a;
    	if(a == 'C' || a== 'M' || a == 'Y'){
    		count++;
    		break; 
    	}
    	else{
    		count = 0; 
    	}
    }

    if(count == 0){
    	cout<<"#Black&White"<<endl;
    }
    else{
    	cout<<"#Color"<<endl;
    }

    return 0;
}
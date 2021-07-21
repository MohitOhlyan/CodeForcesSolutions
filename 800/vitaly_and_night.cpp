#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; 
    cin>>n>>m; 

   	int a[202][202];
   	for(int i = 1;i<=n;i++){
   		for(int j = 1;j<=2*m;j++){
   			cin>>a[i][j];
   		}
   	}
   	int count = 0;
   	for(int i = 1;i<=n;i++){
   		for(int j = 1;j<=m;j++){
   			if(a[i][2*j] ==1 || a[i][(2*j)-1] ==1 || a[i][2*j]+a[i][(2*j)-1] ==2){
   				count++;
   				// cout<<i<<" "<<j;
   			}
   		}
   		
   	}
   	cout<<count<<endl;
   	count = 0;
}
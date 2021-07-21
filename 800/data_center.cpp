#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n; 
	cin>>n; 
	int temp;
	int p=1000000; 
	for(int i = 1;i<=n;i++){
		if(n% i == 0){
		 temp = 2 * (i + (n/i));
		 p= min(p,temp);
		}
		// this 
	}
	 cout<<p<<endl;

}

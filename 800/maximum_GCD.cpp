#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i = 0;i<t;i++){
		int n;
		cin>>n;
		if(n%2 ==0){
			for(int j = n-1;j>=1;j--){
			if(n%j ==0){
				cout<<j<<endl;
				break;
			}
		}
		}
		else if(n%2 ==1){
			n = n-1;
			for(int j = n-1;j>=1;j--){
			if(n%j ==0){
				cout<<j<<endl;
				break;
			}
		}
		}
		
	}
}

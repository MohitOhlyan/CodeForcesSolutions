#include<iostream>

using namespace std;

int main(){
	int n;
	int t;
	int ans = 0; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t==1){
			ans = 1;
		}
		
	}
	
	if(ans == 1){
		cout<<"HARD"<<endl;
	}
	else{
		cout<<"EASY"<<endl;
	}
	
}

#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n,c;
	cin>>n>>c;
	int q[52],t[52];
	for(int i = 0;i<n;i++){
		cin>>q[i];
	}
	for(int i = 0;i<n;i++){
		cin>>t[i];
	}
	int sum1= 0,sum2= 0;
	int time = 0;
	for(int i= 0;i<n;i++){
		time = time + t[i];
		sum1 = sum1+ max(0,q[i] - (c*time) );

	}
	time = 0;
	for(int i= n-1;i>=0;i--){
		time = time + t[i];
		sum2 = sum2+ max(0,q[i] - (c*time) );

	}
	// cout<<sum1<<" "<<sum2<<endl;
	if(sum1>sum2){
		cout<<"Limak"<<endl;
	}
	else if(sum2>sum1){
		cout<<"Radewoosh"<<endl;

	}
	else if(sum2== sum1){
		cout<<"Tie"<<endl;
	}

}
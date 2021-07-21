#include<bits/stdc++.h>
using namespace std; 
 
int main(){
	int n; 
	int count1= 0,count2 = 0;
	int server1 = 0, server2= 0;
	cin>>n;
	for(int i = 0;i<n;i++){
		int t,a,b;
		cin>>t>>a>>b; 
		
		if(t == 1){
			server1 = server1+1;
			count1 = count1+a;
			
		}
		else if(t == 2){
			server2 = server2+1;	
			count2 = count2+a;
			
		}
		// cout<<count1<<endl;
	}

	/*cout<<server1<<" "<<count1<<endl;
	cout<<server2<<" "<<count2<<endl;*/

	if(count1 >= (server1*10)/2){
		cout<<"LIVE"<<endl;
	}
	else {
		cout<<"DEAD"<<endl;
	}
	if(count2 >= (server2*10)/2){
		cout<<"LIVE"<<endl;
	}
	else {
		cout<<"DEAD"<<endl;
	}

}
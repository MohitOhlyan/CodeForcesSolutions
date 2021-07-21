#include<bits/stdc++.h>
using namespace std; 
int main(){
	string x; 
	cin>>x; 
	int p = x.length();
	for(int i = 0;i<p;i++){
		if(x[i] == 46){
			if(x[i-1] == 57){
				cout<<"GOTO Vasilisa.";
				break;
			}
			else if(x[i+1] >= 53){
				x[i-1] = x[i-1]+1;

				for(int j = 0;j<i;j++){
					cout<<x[j];
				}
				break;
			}
			else if(x[i+1] <53){

				for(int j = 0;j<i;j++){
					cout<<x[j];
				 }
				 break;
			
		}
	}
}
}
#include<iostream>

using namespace std;

int main(){
	int n,i,q;
	int p,x[103],y[103];
	int count = 0;
	cin>>n;
	
	scanf("%d",&p);
	for(i=0;i<=p;i++){
		cin>>x[i];
	}
	scanf("%d",&q);
	for(i=0;i<=q;i++){
		cin>>y[i];
	}
	
	for(i=0;i<=p;i++){
		if(x[i] == n){
			count++;
		}
	}
	for(i=0;i<=q;i++){
		if(y[i] == n){
			count++;
		}
	}
	
	if(count == 0){
		cout<<"Oh, my keyboard!"<<endl;
		
	}
	else if(count>=1){
		cout<<"I become the guy."<<endl;
		
	}
	
}

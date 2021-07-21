#include<iostream>

using namespace std;

int main(){
	int n,k,a[52];
	int count=0;
	
	cin>>n>>k;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int place = a[k];
	for(int i= 1;i<=n;i++){
		
			if(a[i]>=place && a[i] > 0){
				count++;
			}
		
	}
	cout<<count<<endl;
}

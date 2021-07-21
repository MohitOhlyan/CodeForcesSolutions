#include<iostream>
using namespace std;

int main(){
	int n;
	int a[100005]; 
	int group=0;
	cin>>n;
	
	for(int i= 0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i = 0;i<n;i++){
		if(a[i] !=a[i+1]){
			group++;
			
		}
	}
	cout<<group;
	
}

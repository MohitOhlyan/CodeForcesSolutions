#include<iostream>
using namespace std; 

int main(){
	string a;
	string b;
	int  c[101];
	cin>>a;
	cin>>b;
	
	for(int i= 0;i<a.length();i++){
		if(a[i] == b[i] ){
			c[i] = 0;
		}
		else if(a[i] != b[i]){
			c[i] = 1;
		}
	}
	for(int i= 0;i<a.length();i++){
			cout<<c[i];
	}

}

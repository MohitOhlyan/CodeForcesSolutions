#include<bits/stdc++.h>
using namespace std; 
int main(){
	int count = 0;

	for(int i = 0;i<3;i++){
		string s;

		getline(cin,s);

		int temp = 0;

		// cout<<s.length()<<endl;

		if(i == 0 || i == 2){
			for(long unsigned int j = 0;j<s.length();j++){
				if(s[j] == 97 || s[j] == 101 || s[j] == 105 || s[j] == 111 || s[j] == 117){
					temp++; 
				}
			}
			// cout<<temp<<endl;
			if(temp == 5){
				count++;
			}
		}
		else if(i == 1){
			for(long unsigned int j = 0;j<s.length();j++){
				if(s[j] == 97 || s[j] == 101 || s[j] == 105 || s[j] == 111 || s[j] == 117){
					temp++; 
				}
			}
			// cout<<temp<<endl;
			if(temp == 7){
				count++;
			}
		}
		
		
	// cout<<count<<endl;
}
if(count ==3){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}
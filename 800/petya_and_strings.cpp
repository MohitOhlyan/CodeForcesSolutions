#include<iostream>

using namespace std;

int main(){
	string s1;
	string s2;
	int count = 0;
	cin>>s1;
	cin>>s2;
	
	for(int i = 0;i<s1.length();i++){
		if(s1[i] >=65 && s1[i] <=90){
			s1[i] = int(s1[i] + 32);
		}
	}
	for(int i = 0;i<s2.length();i++){
		if(s2[i] >=65 && s2[i] <=90){
			s2[i] = int(s2[i] + 32);
		}
	}
	for(int i=0;i<s1.length();i++){
		if(s1[i] < s2[i]){
			cout<<"-1"<<endl;
			break;
		}
		else if(s1[i] > s2[i]){
			cout<<"1"<<endl;
			break;
		}
		else if(s1[i] == s2[i]){
			count++;
		}
		
		if(count == s1.size()){
			cout<<"0"<<endl;
			
		}
	}
	
}

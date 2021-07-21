#include<iostream>
using namespace std;
#include<string>
#include<sstream>

int main(){
	int n;
	cin>>n;
	string s;
	
	for(int i= 0;i<n;i++){
		cin>>s;
		
		if(s.length()>10){
			string p; 
			string q,t;
			q = s[0];
			int x = s.size()-1;
			t = s[x]; 
			
			int a = x-1;
			stringstream ss;
			ss << a;
			string str = ss.str();
			
			
			
			p = q + str;
			p = p + t;
			cout<<p<<endl;
			
		}
		else if(s.length()<=10){
			cout<<s<<endl;
		}
	}
}

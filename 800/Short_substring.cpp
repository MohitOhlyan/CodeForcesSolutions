#include<iostream>
#include<list>
using namespace std;
#include<string>
#include<vector>

int main(){
	int n,j;
	int k;
	string b;
	string a;
	vector<string> p;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>b;
		k = b.size();
		
		for(j=0;j<k;j+=2){
			a = a + b[j];
			
		}
		a = a + b[k-1];
		p.push_back(a);
		a = "";
}
	for(int i = 0;i<p.size();i++){
		cout<<p.at(i)<<endl;
	}


}

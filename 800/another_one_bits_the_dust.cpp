#include<bits/stdc++.h>
using namespace std; 
int main(){
	long long int a,b,c;
	cin>>a>>b>>c; 
	long long int sum = a+b+ (2*c);
	// cout<<sum<<endl;
	if(b-a >= 1){
		sum = sum - (b-a-1);
	} 

	else if(a -b >1){
		sum = sum - (a-b-1);
	}
	printf("%lld",sum);
}
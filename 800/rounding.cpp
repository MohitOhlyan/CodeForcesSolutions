#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n; cin>>n; 

    if(n%10 == 0){
    	cout<<n<<endl;
    }
    else if(n%10 >= 5){
    	cout<<n+(10 - (n%10))<<endl;
    }
    else if(n%10 <5){
    	cout<<n - (n%10)<<endl;
    }
}
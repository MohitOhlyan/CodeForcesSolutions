#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; 
	cin>>t;
	
	for(int i = 0;i<t;i++){
		int x;
		cin>>x;
		int sum =0;
		int num =0;
		num = x%10;
		if(x <10){
			sum = (num-1)*10+1;
			cout<<sum<<endl;
		}
		else if(x<100 && x>10){
			sum = 10*(num-1) + 3;
			cout<<sum<<endl;		
		}
		else if(x<1000 && x>100){		
			sum =10*(num-1) + 6;
			cout<<sum<<endl;
		}
		else if(x>1000){		
			sum = 10*num;
			cout<<sum<<endl;			
		}
		
	
	}
}

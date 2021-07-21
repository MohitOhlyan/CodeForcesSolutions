#include<iostream>

using namespace std;
#define MAX 100002
int main(){
	int n;
	int sum=0;
	int crime=0;
	int number=0;
	int a[MAX];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i =0;i<n;i++){
		
		if(a[i] != -1){
			sum = sum+ a[i];
			crime = 0;
		}
		else if(a[i]== -1){
			
			crime = sum - 1;
			
			if(crime<0){
				number++;
				
			}
			else if(crime >=0){
				sum--;
			}
		}
		
	}
	
	cout<<number;
	
}

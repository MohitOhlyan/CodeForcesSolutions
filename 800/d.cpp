#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	int i;
	long long int sum = 0;
	
	long long int a[5001],b[5001];
	long long int ans[5001];
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%lld", &a[i]);
	}
	for(i = 0;i<n;i++){
		scanf("%lld", &b[i]);
	}
	
	for(i=0;i<n;i++){
		
		sum = sum + a[i]*b[i];
		}
	

	
	for(i=0;i<n;i++){
		
		if((a[i]*b[i+1]+a[i+1]*b[i]) > (a[i]*b[i] + a[i+1]*b[i+1])){
			
			ans[i] = sum + (a[i]*b[i+1]+a[i+1]*b[i]) - (a[i]*b[i] + a[i+1]*b[i+1]);
			
		}
		else {
			ans[i] = 0;
		}
	}
	long long int largest;
	
	for(i=0;i<n;i++){
		if(ans[i] >= largest){
			largest = ans[i];
			
		}
	}
	printf("%d",largest);
	
}

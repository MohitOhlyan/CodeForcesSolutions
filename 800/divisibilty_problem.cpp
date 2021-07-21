#include<stdio.h>
int main(){
	long long int a ,b;
	int t;
	int i;
	long long int rem;
	long long int ans[100001];
	scanf("%d",&t);
	long long int quotient;
	for(i=0;i<t;i++){
		scanf("%lld %lld",&a,&b);
		
		rem = a%b;
		
		if(rem !=0){
			quotient = a/b;
			quotient++;
			ans[i] = b*quotient - a;
		}
		
		else if(rem == 0){
			ans[i] = 0;
		}
	}
	for(i=0;i<t;i++){
		printf("%d\n",ans[i]);
		
	}
}

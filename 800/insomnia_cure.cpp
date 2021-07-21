#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	int k,l,m,n,d;
	scanf("%d",&k);
	scanf("%d",&l);
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&d);
	int i,sum=0;
	for(i=1;i<=d;i++){
		if(i%k == 0){
			sum++;
		}
		else if(i%l == 0){
			sum++;
		}
		else if(i%m == 0){
			sum++;
		}
		else if(i%n == 0){
			sum++;
		}
	}
	
	printf("%d",n-(n-sum));
}


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	int n,k;
	
	scanf("%d %d",&n,&k);
	
	while(k != 0){
		
		if((n%10) != 0){

			 n--;
			 
		}
		else if((n%10) == 0){
			n = n/10;
			
		}
		
		k--;
	}
	
	printf("%d",n);
}


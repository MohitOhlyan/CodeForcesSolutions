#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define MAX 6
int main()
{
	int i,j;
	int count=0;
	int m,n;
	int a[MAX][MAX];
	 
	for(i=1;i<6;i++){
		for(j=1;j<6;j++){
			scanf("%d",&a[i][j]);
		}
	}
	puts("");
		for(i=1;i<6;i++){
			
			for(j=1;j<6;j++){
				
				if(a[i][j] ==1){
					m=i;
					n = j;	
					break;
					
			}
		}
	}
	if(m!=3 && n==3){
		while(m!=3){
		
		if(m<3){
		
		m++;
		count++;
		}
		
		if(m>3){
		m--;
		count++;
		}
		}
	}
	else if(m==3 && n!=3){
		while(n!=3){
		
		if(n<3){
		n++;
		count++;
		}
		
		if(n>3){
		n--;
		count++;
		}
		}
	}
	else if(m!=3 && n!=3){
		while(n!=3){
		
		if(n<3){
		n++;
		count++;
		}
		
		if(n>3){
		n--;
		count++;
		}
		
		}
		while(m!=3){
		
		if(m<3){
		m++;
		count++;
		}
		
		if(m>3){
		m--;
		count++;
		}
		
		}
	}
	
	else{
		count =0;
	}
	
	printf("%d",count);
}



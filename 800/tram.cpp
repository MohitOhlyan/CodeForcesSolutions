#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	 int t;
	 int x, ans = 0,total=0;
	 int a,b;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
		
		scanf("%d %d",&a,&b);
			x = -a+b;
			total = total +x;
			
			if(total>ans){
				ans = total;
			}
		}
		
		
	
	
	printf("%d",ans);
	
}



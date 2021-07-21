#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	
	int ans1,diff,ans2;
	
	if(a<=b){
		ans1 = a;
		
	}
	else if(b<a){
		ans1 = b;
		
	}
	if(a<=b){
		diff = b-a;
		
	}
	else if(b<a){
		diff = a-b;
		
	}
	if(diff>1){
		ans2 = diff/2;
	}
	else if( diff<1){
		ans2 = 0;
	}
	printf("%d %d",ans1, ans2);
}

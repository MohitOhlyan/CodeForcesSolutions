#include<stdio.h>
int main(){
	int t;
	long long int a,b;
	int i;
	long long int count=0;
	long long int ans[10004];
	
	scanf("%d",&t);
	
	for(i = 0;i<t;i++){
		
		scanf("%lld %lld",&a,&b);
		if(a>b){
			if((a-b)>=10){
				count = count + (a-b)/10;
				b = b + ((a-b)/10)*10;
					if((a-b)<10 && (a-b)>0 ){
						count++;
				}
			}
			else if((a-b)<10){
				count++;
			}
				ans[i] = count;	
		}	
		
		else if(a<b){
			if((b-a)>=10){
				count = count + (b-a)/10;
			
				
				a = a+ ((b-a)/10)*10;
			
					if((b-a)<10){
						count++;
				}
			}
			else if((b-a)<10  && (a-b)>0){
				count++;
			}
				ans[i] = count;		
		}
		else if( a==b){
			ans[i] = 0;
		}
		count = 0;
		
	}
	
	for(i=0;i<t;i++){
		printf("%lld\n",ans[i]);
		
	}
}
/*
1
1 999999994
*/

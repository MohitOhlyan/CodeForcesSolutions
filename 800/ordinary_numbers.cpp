#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int t,b,c;
	int i,a,m,j;
	long long int n;
	char s[11];
	long long int ans[10002];
	int count = 0;

	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%lld",&n);
		
		if(n<10){
			ans[i] = n;
		}
		
		else if(n>10){
			
			for(j=1;j<=10;j++){
				
				if(n==pow(10,j)){
					a = j;
					ans[i] = a*9;
					break;
				}
				else if (n<pow(10,j) && n>pow(10,j-1)){
					a = j-1;
					
					b = n/(pow(10,j-1));

					c = b-1;
					
					itoa(n,s,10);
					
					for(m=0;m<strlen(s);m++){
						if(s[0] == s[m]){
							count++;
						}
					}
					
					if(count == strlen(s)){
							c++;
						}
					
					ans[i] = 9*a+c;
					}
				}
				
			}
			
			count = 0;
		}
		
	
	for(i=0;i<t;i++){
		printf("%lld\n",ans[i]);
	}
}

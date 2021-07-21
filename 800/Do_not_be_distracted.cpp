#include<stdio.h>
int main(){
	int t;
	int n,p,i,j,k,count = 0;
	char s[51];
	int ans[1002];
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){

		scanf("%d",&n);
		scanf("%s",s);
		
		for(j=0;j<n;j++){
			
			for(k=j+1;k<n;k++){
				
				if(s[j] != s[k]){
					
					for(p=k+1;p<n;p++){
						
						if(s[p] == s[j]){
							
							count++;
							break;
						}
						
					}
				}
			}
			if(count > 0){
				ans[i] = 0;
				break;
			}
			else if(count == 0){
				ans[i] = 1;
				
			}
		}
		count = 0;
		
	}
	for(i=0;i<t;i++){
		if(ans[i] ==0){
			printf("NO\n");
		}
		else if(ans[i] >0){
			printf("YES\n");
		}
	}
}

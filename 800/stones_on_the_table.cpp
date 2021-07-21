#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	int n,i,count=0;
	char s[MAX];
	char s2[MAX];
	
	scanf("%d",&n);
	
	scanf("%s",s);
	strcpy(s2,s);
	
	for(i=0;i<n;i++){
		if(s[i] == 'R'){
			if(s[i+1] == 'R'){	
				s2[i+1] = 0;
			}
		}
		if(s[i] == 'B'){
			if(s[i+1] == 'B'){	
				s2[i+1] = 0;
			}
		}
	
		if(s[i] == 'G'){
			if(s[i+1] == 'G'){	
				s2[i+1] = 0;
			}
		}
	}
	for(i=0;i<n;i++){
		if(s2[i] == 0){
			count++;
		}
	}
	printf("%d",count);
}


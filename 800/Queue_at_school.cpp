#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	char s[MAX];
	int i,j;
	int n;
	int t,x;
	char hold;
	scanf("%d %d",&n,&t);
	x=t;
	scanf("%s",s);
	
	for(i = 0;i<n;i++){
		t=x;
		for(j=i;j<n;j++){
			
			if(s[i] =='B' && s[i+1]=='G'){
				hold = s[j];
				s[j] = s[j+1];
				s[j+1] = hold;
				t--;
			}
			if(t ==0){
				break;
			}
			
		}
		t=x;
	}
	printf("%s",s);
}


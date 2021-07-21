#include<stdio.h>
int main(){
	int n;
	int total=0,i;
	char s[20];
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%s",s);
		
		if(s[0] == 'T'){
			total = total + 4;
		}
		if(s[0] == 'C'){
			total = total + 6;
		}
		if(s[0] == 'O'){
			total = total + 8;
		}
		if(s[0] == 'D'){
			total = total + 12;
		}
		if(s[0] == 'I'){
			total = total + 20;
		}
	}
	printf("%d",total);
	
	
}

#include<stdio.h>
#include<string.h>

int main(){
	char g[101];
	char h[101];
	char shuf[202];
	int count_g =0,count_h=0;
	scanf("%s",g);
	scanf("%s",h);
	scanf("%s",shuf);
	int i,j;
	for(i=0;i<strlen(g);i++){
		for(j=0;j<strlen(shuf);j++){
			if(g[i] == shuf[j]){
				shuf[j] = '0';
				count_g++;
				
				break;	
			}
		}
	}

	
	for(i=0;i<strlen(h);i++){
		for(j=0;j<strlen(shuf);j++){
			if(h[i] == shuf[j]){
				
				count_h++;
				break;	
			}
		}
	}
	if(strlen(shuf)==strlen(g)+strlen(h)){
		if(count_g == strlen(g) && count_h == strlen(h)){
		printf("YES");
	}
	else{
		printf("NO");
		
	}
	}
	else{
		printf("NO");
	}
	
	
}

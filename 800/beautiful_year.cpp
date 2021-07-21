#include<iostream>
using namespace std;

int main(){
	int year; 
	int i;
	int first,second,third, fourth;
	cin>>year;
	
	for(i=year+1;i<=9999;i++){
		 first = i/1000;
		 second = (i/100)%10;
		 third = (i%100)/10;
		 fourth = i%10;
		
		if(first != second && first !=third && first != fourth){
			if(second != third && second != fourth){
				if(third != fourth){
				
					break;
					
				}
			} 
		}
	}
	
		cout<<i<<endl;	
}

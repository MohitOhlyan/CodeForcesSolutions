#include<iostream>
#include<string>

using namespace std;

int  main(){
	int x,y,z;
	cin>>x >>y >>z;
	int mid, big, small;
	
	if(x-y>0 && x-z>0){
		big = x;
		if(y-z>0){
			small = z;
			mid = y;
		}
		else if(y-z<0){
			small = y;
			mid = z;
		}
	}
	else if(x-y>0 && x-z<0){
		
		big = z;
		small = y;
		mid = x;
		
	}
	else if (y>z && z>x){
		big = y;
		small = x;
		mid = z;
	}
	else if(x-y<0 && x-z<0){
		small = x;
		if(y-z>0){
			big = y;
			mid = z;
		}
		else if(y-z<0){
			big = z;
			mid = y;
		}
	}
	cout<<mid<<endl<<big<<endl<<small;
	int sum = 0;
	sum = sum + (big-mid);
	sum = sum + (mid-small);
	cout<<sum<<endl;
}

#include<bits/stdc++.h>
using namespace std; 
int main(){
	int m,d; 
	cin>>m>>d; 
	if(m ==2){
		switch(d){
			case 1: cout<<"4";
			break;

			case 2: cout<<"5";
			break;

			case 3: cout<<"5";
			break;

			case 4: cout<<"5";
			break;

			case 5: cout<<"5";
			break;

			case 6: cout<<"5";
			break;

			case 7: cout<<"5";
			break;
		}
	}

	else if(m % 2 == 1 && m<8){
		switch(d){
			case 1: cout<<"5";
			break;

			case 2: cout<<"5";
			break;

			case 3: cout<<"5";
			break;

			case 4: cout<<"5";
			break;

			case 5: cout<<"5";
			break;

			case 6: cout<<"6";
			break;

			case 7: cout<<"6";
		}

	}

	else if(m % 2 == 0 && m<8){
		switch(d){
			case 1: cout<<"5";
			break;

			case 2: cout<<"5";
			break;

			case 3: cout<<"5";
			break;

			case 4: cout<<"5";
			break;

			case 5: cout<<"5";
			break;

			case 6: cout<<"5";
			break;

			case 7: cout<<"6";
		}

	}
	else if(m % 2 == 1 && m>=8){
		switch(d){
			case 1: cout<<"5";
			break;

			case 2: cout<<"5";
			break;

			case 3: cout<<"5";
			break;

			case 4: cout<<"5";
			break;

			case 5: cout<<"5";
			break;

			case 6: cout<<"5";
			break;

			case 7: cout<<"6";
		}

	}
	else if(m % 2 == 0 && m>=8){
		switch(d){
			case 1: cout<<"5";
			break;

			case 2: cout<<"5";
			break;

			case 3: cout<<"5";
			break;

			case 4: cout<<"5";
			break;

			case 5: cout<<"5";
			break;

			case 6: cout<<"6";
			break;

			case 7: cout<<"6";
			break;
		}

	}




}
#include<bits/stdc++.h>
using namespace std; 
int main(){
	int m,n;
	char a[102][102];
	vector<int> i1,j1;
	cin>>m>>n;
	for(int i = 1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j] == 42){
				i1.push_back(i);
				j1.push_back(j);

			}
		}
	}
	//for(int i = 0;i<4;i++){
	//	cout<<i1[i]<<" "<<j1[i]<<endl;
	// }
	if(i1[0] == i1[1]){
		i1[3] =i1[2];

		if(j1[1] == j1[2]){
			j1[3] = j1[0];
		}
		else if(j1[1] != j1[2]){
			if(j1[0] == j1[1]){
				j1[3] = j1[2];
			}
			else if(j1[0] != j1[1]){
				j1[3] = j1[1];
			}
		}
		
	}
	else if(i1[0] != i1[1]){
		i1[3] = i1[0];
		if(j1[0] != j1[1]){
			j1[3] = j1[1];

		}
		else if(j1[0] == j1[1]){
			j1[3] = j1[2];
		}
	}
	cout<<i1[3]<<" "<<j1[3];

}

//link del problema en codeforces
//https://codeforces.com/problemset/problem/1296/A

#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

void solve(){
	int n, x;
	cin>>n;
	bool par=0, impar=0;

	for(int i=0; i<n; i++){
		cin>>x;
		if(x%2==1){
			impar=1;
		}
		else{
			par=1;
		}
	}
	if((par==1 && impar==1) || (impar==1 && n%2==1)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		solve();
	}
	return 0;
}

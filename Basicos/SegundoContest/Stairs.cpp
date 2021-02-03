//Stairs
//link del problema en codeforces: https://codeforces.com/problemset/problem/1419/B

#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

long long int area( long long int n ){
	return n*(n+1)/2;
}

void solve(){
	long long int n, ans=0, w=0;
	cin>>n;

	for(long long int i=1; 1; i*=2){
		w+=i;
		if(n<area(w)){
			break;
		}
		ans++;
		n-= area(w);
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		solve();
	}
	return 0;
}

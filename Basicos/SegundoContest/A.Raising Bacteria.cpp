//Problema en CODEFORCES: A. Raising Bacteria
//link del problema en codeforces: https://codeforces.com/contest/579/problem/A

#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
 
int main(){
	int x,ans;
	cin>>x;
	ans=0;
 
	while(x!=0){
		if(x%2==1){
			ans++;
		}
		x/=2 ;
	}
	cout<<ans;
}

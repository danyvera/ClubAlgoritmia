//link del problema en codeforces: https://codeforces.com/problemset/problem/5/C
//Nombre del Problema en codeforces: Longest Regular Bracket Sequence

#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;

#define ll    long long            

int main(){
    ll ans=0, k=1;
    
    string s;
    cin>>s;

    stack<ll>p;
    p.push(-1);


        for (ll i=0;i<s.size();i++){

             if(s[i]=='('){
                p.push(i);
             }  
                

             else{
                 //cout<<i<<" "<<p.top()<<endl;
                 p.pop();

                 if(!p.empty() ){
                    ll top= i-p.top();
                    //cout<<top<<" "<<i<<" "<<p.top()<<endl;

                    if(top>ans){
                        ans=top;
                        k=1;
                    }

                    else if(top==ans)
                        k++;
                 }
                 else {
                    p.push(i);
                 }
             }
               // cout<<i<<" - "<<p.top()<<endl;
         }

    if(ans>0){
        cout<<ans<<" "<<k<<endl;
    }
    else {
        cout<<"0 1"<<endl;
    }

    return 0;
}

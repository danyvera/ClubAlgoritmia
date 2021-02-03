#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int IDamigo,x,p,len;
    map <int,int> mp;
    stack <int> pila;

        for (int i=1; i<=n; i++){
            cin>>IDamigo;

            if (pila.empty()){
                mp[IDamigo] = 1;
                pila.push(IDamigo);
            }
            else {
                p = pila.size()-mp[IDamigo]+1;

                if (mp[IDamigo] == 0 || (p > 0 && p > k)) {
                    x = pila.top();
                    mp[IDamigo] = mp[x]+1;
                    pila.push(IDamigo);
                }
            }
        }

        if (pila.size() > k){
            len = k;
        }
        else{
            len = pila.size();
        }

        cout<<len<<endl;

        cout<<pila.top()<<" ";
        pila.pop();
        --len;

        while (!pila.empty()) {
            if (!len){
                break;
            }

            cout<<pila.top()<<" ";
            --len;
            pila.pop();
        }

    return 0;
}

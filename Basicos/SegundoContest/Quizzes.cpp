//Quizzes
//link del problema en AtCoder: https://atcoder.jp/contests/abc184/tasks/abc184_b?lang=en

#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    string s;
    cin>> s;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'o'){
          x++;
        }
        else if(x!=0){ 
          x--;
        }
    }
    cout << x << endl;
    return 0;
}

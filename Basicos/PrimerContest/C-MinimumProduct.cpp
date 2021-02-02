#include<bits/stdc++.h>
using namespace std;
#include <iostream>
 
//link del problema en codeforces: https://codeforces.com/problemset/problem/1409/B
//Nombre del Problema en codeforces: Minimum Product

void decrementar(long long& a, long long x, long long& n){
	if(n!=0){ //mientras aun nos queden cambios
		if(a-n >= x){ //si  a-n >x  o  b-n >y
			a=a-n; //entonces solo le restamos a ese numero (a o b) el numero n
			n=0; //ya hicimos todos los n decrementos de 1
		}
		else{
			n=n-(a-x); //los cambios que nos decrementos faltantes son los que no le pudimos hacer a a o b
			a=x; //entonces nuestro numero a o b se convierte en su numero minimo limite respectivo (x o y )
		}
	}
}
 
int main(){
	int t; //t casos
	cin>>t;
 
	for (int i = 0; i < t; ++i){
		long long a,b,x,y,n;
		cin>> a >> b >> x >> y >> n;
 		
 		long long aReducida, bReducida;
		aReducida= max(a-n, x); //encontramos el numero mimino al que podria llegar a
		bReducida= max(b-n, y); //			el numero minimo al que podria llegar b
		
		if(aReducida<= bReducida){ //entonces al que se le pueden haver mas cambios es a a
			decrementar(a, x, n); //primero decrementamos a
			decrementar(b, y, n); //luego b
		}
		else{ //en caso de que bReducida>aReducida, entonces al que se le pueden hacer mas cambios es a b
			decrementar(b, y, n); //primero decrementamos b
			decrementar(a, x, n); //luego a
		}
 		
 		long long minProducto = a * b;
		cout<<minProducto<<endl;
	}
	return 0;
}

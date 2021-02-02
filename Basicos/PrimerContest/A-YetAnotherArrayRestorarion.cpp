#include<bits/stdc++.h>
using namespace std;
#include <iostream>

//link del problema en codeforces: https://codeforces.com/problemset/problem/1409/C
//Nombre del Problema en codeforces: Yet Another Array Restoration
 
int main(){
	int t; //t casos
	cin>>t;

	for(int z=0; z<t; z++){
		int n, x, y;
		cin>> n>> x>> y;

		bool flag=false; //banderita que nos indicara si el vector de salida ya es valido 
 		
		for(int i=1; i<=50; i++){ //i indicara el numero en el que iran aumentando los numeros del vector

			for(int j=1; j<=50; j++){ //j indicara el numero en el que empieza el vector

				int numerosXyY=0; //cuando este contador llegue a 2, sera porque ya añadimos los numeros x y y 
				vector<int> numerosTomados;

				for(int k=j; numerosTomados.size()<n; k+=i){
					if(k==x || k==y){ //checamos si el numero es x o y 
						numerosXyY++; //y en caso de que lo sea, sumamos 1 a nuestro contador
					}
					numerosTomados.push_back(k); //añadimos el numero a nuestro vector de numeros tomados
				}

				if(numerosXyY==2){ //si los numeros x y y ya estan dentro de nuestro vector  
					for(int k=0; k<n; k++){  
						cout<<numerosTomados[k]<<" "; //entonces imprimimos los valores dentro de nuesto vector
													  //imprimira los valores en forma ascendente
					}
					cout<<endl;
					flag= true; //ya es valido nuestro vector, lo cual nos indica que debemos terminar los ciclos
				}

				if(flag==true){
					break;
				}

			}


			if(flag==true){
				break;
			}
		}
	}
	return 0;
}

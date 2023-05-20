#include<bits/stdc++.h>
using namespace std;
string InsertarCaracterCadaTresDigitos(string caracter, string frase);
int main(){	
    string frase,caracter;
	cout<<"ingrese la frase:"<<endl;
    getline(cin,frase);
    cout<<"ingrese un caracter:"<<endl;
    cin>>caracter;
    string Resultado=InsertarCaracterCadaTresDigitos(caracter,frase);
	cout<<"La palabra convertida es:"<<Resultado;
	return 0;
}
string InsertarCaracterCadaTresDigitos(string caracter, string frase){
	string PalabraConvertida; 
	int i,contador=2;
	for(i=0; i<frase.size(); i++){
		PalabraConvertida+=frase[i];
		if(i==contador){
			PalabraConvertida+=caracter;
			contador=contador+3;
		}
	}
	return PalabraConvertida;
}

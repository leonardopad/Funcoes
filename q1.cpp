#include <iostream>

int validaPositivo(int parametro){
	if (parametro > 0){
		std:: cout << parametro << " positivo";
	} else if(parametro < 0) {
		std:: cout << parametro << " negativo";
	} else{
		std:: cout << 0;
	}
	return 0;
}

int main (){
	int numero = 0;
	std:: cin >> numero;
	return validaPositivo(numero);
}

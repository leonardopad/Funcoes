#include <iostream>

int validaPositivo(int parametro){
	if (parametro > 0){
		std:: cout << parametro << " positivo";
	}else {
		std:: cout << parametro << " negativo";
	}
	return 0;
}

int main (){
	int numero = 0;
	std:: cin >> numero;
	return validaPositivo(numero);
}

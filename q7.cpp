#include <iostream>
float notaMaisAlta(float nota1, float nota2, float nota3){
	if(nota1 > nota2 && nota2 > nota3){
		return nota1 + nota2;
	}else if (nota2 > nota1 && nota3 > nota1){
		return nota2 + nota3;
	}else {
		return nota1 + nota3;
	}
}

float media(float nota1, float nota2){
	return (nota1 + nota2) /2;
}

int main (){
	int nota1, nota2, nota3;
	std:: cin >> nota1;
	std:: cin >> nota2;
	std:: cin >> nota3;
	
	std:: cout << notaMaisAlta(nota1, nota2, nota3);
	std:: cout << media;	
}


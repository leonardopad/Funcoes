#include <iostream>

float equacao(int a, int b, int c){
	
	return ((b*b)-4*a*c);
}

int main (){
	int numero1 = 0;
	int numero2 =0;
	int numero3 = 0;
	std:: cin >> numero1;
	std:: cin >> numero2;
	std:: cin >> numero3;
	
	std:: cout << equacao(numero1,numero2,numero3);
}

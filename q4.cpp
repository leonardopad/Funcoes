#include <iostream>

int escolheMaior(int a, int b, int c){
	if ( a > b && a > c){
		std:: cout << a;
	}else if (b > a && b > c){
		std:: cout << b;
	}else if (c > a && c > b){
		std:: cout << c;
	}
	return 0;
}

int main(){
	int num1, num2, num3;
	std:: cin >> num1;
	std:: cin >> num2;
	std:: cin >> num3;
	
	return escolheMaior(num1, num2, num3);
}

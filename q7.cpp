#include <iostream>
float media3Juntas(float a, float b, float c, float media){
	media = ((a + b + c) /3);
	std:: cout << "A media com as 3 notas somadas e: " << media;
	return 0;
}
float mediaDuas(float a, float b, float media){
	media = ((a + b)/2);
	std:: cout << "A media usando as mais altas e equivalente a " << media;
	return 0;
}

int main (){
	float nota1  = 0; 
	float nota2  = 0;
	float nota3  = 0;
	float maior  = 0; 
	float meio   = 0;
	float menor  = 0;
	float media  = 0;
	std:: cin >> nota1;
	std:: cin >> nota2;
	std:: cin >> nota3;
	
	if(nota1 >= nota2 && nota2 >= nota3){
		maior = nota1;
		meio  = nota2;
		menor = nota3;
	}else if (nota3 >= nota2 && nota2 >= nota1) {
		maior = nota3;
		meio  = nota2;
		menor = nota1;
	}else if (nota2 > nota3 && nota3 > nota1){
		maior = nota2;
		meio  = nota3;
		menor = nota1;
	}else if (nota2 > nota1 && nota1 > nota3){
		maior = nota2;
		meio = nota1;
		menor = nota3;
	}
	
	std:: cout << "maior nota: " << maior << "\nnota media: " << meio << "\nmenor: " << menor << "\n";
	std:: cout << media3Juntas(maior, meio, menor, media) << "\n";
	std:: cout << mediaDuas(maior, meio, media);
	return 0;
}


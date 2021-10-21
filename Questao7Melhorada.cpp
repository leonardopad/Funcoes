#include <iostream>
#include <cstdlib>
#include <ctime>
#define LIMITE_DADO 20
int dado(int numero){
    srand(time(NULL) + numero);
    int sorteio = rand() % LIMITE_DADO + 1;
    return sorteio;
}
int main(){
	int d[] = {0, 0, 0, 0, 0, 0, 0};

	for(int i=0 ; i <= 10000 ; i++){
       int resultado = dado(i);
       std:: cout << resultado << "\n";
       d[resultado - 1] = d[resultado - 1] + 1;
       std:: cout << resultado << "\n";
    }
	
	for (int i = 0; i < 20; i++){
		std:: cout << "Lado: " << i + 1 << ": " << d[i]<< " em " << (d[i] / 10000.0 * 100) << " % das vezes" << "\n";
	}
	return 0;
}

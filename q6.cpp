#include <iostream>
#include <cstdlib>
#include <ctime>
int dado(){
    return (1 + rand() % 6);
}
int main(){
	int d[] = {0, 0, 0, 0, 0, 0, 0};
	int n1, n2, n3, n4, n5, n6;

	for(int i=0 ; i <= 100000 ; i++){
       int resultado = dado();
       std:: cout << resultado << "\n";
       if(resultado == 1){
       	d[0]++;
	   } else if(resultado == 2){
	   	d[1]++;
	   }else if(resultado == 3){
	   	d[2]++;
	   }else if(resultado == 4){
	   	d[3]++;
	   }else if(resultado == 5){
	    d[4]++;
	   }else if(resultado == 6){
	   	d[5]++;
	   }
    }	
		std::cout << "Caiu 1 em : "  << d[0] << " vezes" << "\n";
 		std:: cout << "Caiu 2 em : " << d[1] << " vezes" << "\n";
		std:: cout << "Caiu 3 em : " << d[2] << " vezes" << "\n";
		std:: cout << "Caiu 4 em : " << d[3] << " vezes" << "\n";
		std:: cout << "Caiu 5 em : " << d[4] << " vezes" << "\n";
		std:: cout << "Caiu 6 em : " << d[5] << " vezes" << "\n";
		 
	return 0;
}

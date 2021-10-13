#include <iostream>
#include <cstdlib>
#include <ctime>
int dado(int parametro){
	parametro = time(0);
	srand(parametro);
    return (1 + rand()%6);
}
int main(){
	int d[0], num1, num2, num3, num4, num5, num6;

	for(int i=0 ; i <= 100 ; i++){
       std:: cout << dado(d[])= dado[i];
	}	
//		std:: cout << num1 << "\n" << num2 << "\n" << num3 << "\n" << num4 << "\n" << num5 << "\n" << num6 << "\n";
	return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
int dado(int parametro)	{
		 parametro = time(0);
        	srand(parametro);
        	std:: cout<< 1+rand()%6;
    return 0;
}
int main(){
	int i = 0;
	return dado(i);
}

#include <stdio.h>



int main(){
	printf("Check enumeration\n");

	enum mathConst{PI=3.14, MAX=100, MIN=0};

	double x = PI;
	printf("%f", x);


	return 0;
}

#include <stdio.h>


// Pointer auf Pointer
//

int main(){

	int num = 42;
	printf("Adresse von num: %p\n", &num);

	int *ptr = &num;
	printf("Adresse von ptr: %p\n", &ptr);
	printf("Wert von ptr: %d\n", ptr[0]);
	
	int **pr = &ptr;
	printf("Adresse von pr %p\n", &pr);
	printf("Wert von pr %d\n", *pr[0]);





	return 0;
}

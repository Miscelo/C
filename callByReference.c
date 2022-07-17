#include <stdio.h>



int even(int *n){
	if(*n %2){
		return 1;
	}
	return 0;
}




int main(){
	
	int num;
	printf("Insert number: ");
	scanf("%d", &num);
	if(even(&num)==0){
		printf("Die Zahl ist gerade!\n");
	}else{
		printf("Die Zahl ist ungerade!\n");
	}






	return 0;
}

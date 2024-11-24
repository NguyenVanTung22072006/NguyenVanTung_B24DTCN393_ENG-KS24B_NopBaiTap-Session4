#include <stdio.h>

int main (){
	int number;
	
	printf("Nhap so nam: ");
	scanf("%d", &number);
	
	if ((number % 4 == 0 && number % 100 != 0) || (number % 400 == 0)){
		printf("La nam nhuan\n", number);
	}else{
		printf("Khong phai nam nhuan\n", number);
	}
	
	return 0;
}

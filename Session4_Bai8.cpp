#include <stdio.h>

int main(){
	int number1, number2, number3;
	
	printf("Nhap canh thu 1: ");
	scanf("%d", &number1);
	printf("Nhap canh thu 2: ");
	scanf("%d", &number2);
	printf("Nhap canh thu 3: ");
	scanf("%d", &number3);
	
	if((number1>0 && number2>0 && number3>0) && (number1+number2>number3 && number1+number3>number2 && number2+number3>number1)){
		printf("%d %d %d la ba canh cua tam giac", number1, number2, number3);
	}else{
		printf("%d %d %d khong phai ba canh cua tam giac", number1, number2, number3);
	}
	
	return 0;
}

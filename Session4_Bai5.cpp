#include <stdio.h>

int main(){
	int number1, number2, number3;
	
	printf("Nhap so thu 1: ");
	scanf("%d", &number1);
	printf("Nhap so thu 2: ");
	scanf("%d", &number2);
	printf("Nhap so thu 3: ");
	scanf("%d", &number3);
	
	 if ((number3 > number1 && number3 < number2) || (number3 > number2 && number3 < number1)) {
        printf("So thu 3 nam trong khoang giua so thu 1 và so thu 2\n", number3, number1, number2);
    } else {
        printf("So thu 3 khong nam trong khoang giua so thu 1 và so thu 2\n", number3, number1, number2);
    }

    return 0;
	
}

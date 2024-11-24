#include <stdio.h>

int main(){
	int number;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &number);
	if(number % 3 == 0 && number % 5 == 0){
		printf("Chia het cho ca 3 va 5\n", number);
	}else if(number%5==0){
		printf("Chia het cho 5\n", number);
	}else if(number%3==0){
		printf("Chia het cho 3\n", number);
	}else{
		printf("Khong chia het cho ca 3 va 5\n", number);
	}
	return 0;
}

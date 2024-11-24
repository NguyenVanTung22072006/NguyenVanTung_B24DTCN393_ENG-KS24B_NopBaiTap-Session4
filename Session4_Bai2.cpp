#include <stdio.h>

int main(){
	int number;
	//Nhap vao 1 so nguyen va kiem tra chan le
	printf("Nhap vao 1 so nguyen: ");
	scanf("%d", &number);
	if(number% 2==0){
		printf("La so chan\n", number);
	}else{
		printf("La so le\n", number);
	}
	return 0;
}

#include <stdio.h>

int main(){
	int number;
	
	//Nhap 1 so nguyen 
	printf("Nhap 1 So Nguyen: ");
	scanf("%d", &number);
	//Kiem tra am hay duong
	if(number > 0){
		printf("La So Duong\n",number);
	}
	else{printf("La So Am\n",number);
	}
	return 0;

}

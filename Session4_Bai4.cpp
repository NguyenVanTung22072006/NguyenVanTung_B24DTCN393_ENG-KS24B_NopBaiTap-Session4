#include <stdio.h>

int main(){
	int number;
	
	printf("Nhap so thang: ");
	scanf("%d", &number);
	
	switch(number){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang nay co 31 ngay\n", number);
			break;
		case 4: case 6: case 9: case 11:
		    printf("Thang nay co 30 ngay\n", number);
			break;
		case 2:
			printf("Thang nay co 28 hoac 29 ngay (nam nhuan)\n");
			break;
		default:
			printf("So thang khong hop le\n");
			break;
	}
	return 0;
}

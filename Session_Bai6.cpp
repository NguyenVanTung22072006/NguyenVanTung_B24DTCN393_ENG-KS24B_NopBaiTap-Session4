#include <stdio.h>

int main(){
	int chisocu, chisomoi, sodien;

	printf("Nhap chi so dien cu: ");
	scanf("%d", &chisocu);
	printf("Nhap chi so dien moi: ");
	scanf("%d", &chisomoi);
	
	sodien = chisomoi - chisocu;
	printf("Da su dung %d so dien\n", sodien);
	
	if(sodien >= 0 && sodien < 50){
		printf("gia dien: 10.000 (VND/kWh)");
	}else if(sodien < 100){
		printf("gia dien: 15.000 (VND/kWh)");
	}else if(sodien < 150){
		printf("gia dien: 20.000 (VND/kWh)");
	}else if(sodien < 200){
		printf("gia dien: 25.000 (VND/kWh)");
	}else{
		printf("gia dien: 30.000 (VND/kWh)");
	}
	return 0;
}

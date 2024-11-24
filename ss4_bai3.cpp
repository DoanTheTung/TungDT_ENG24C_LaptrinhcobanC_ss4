#include <stdio.h>

int main(){
	//khai bao so nguyen can nhap
	int soNguyen;
	//nhap so nguyen can kiem tra 
	printf ("nhap so nguyen can kiem tra : ");
	scanf("%d", &soNguyen);
	//kiem tra va in ra man hinh ket qua
	if (soNguyen % 3 == 0 && soNguyen % 5 == 0) {
        printf("So %d chia het cho ca 3 và 5.\n", soNguyen);
    } else if (soNguyen % 3 == 0) {
        printf("So %d chia het cho 3.\n", soNguyen);
    } else if (soNguyen % 5 == 0) {
        printf("So %d chia het cho 5.\n", soNguyen);
    } else {
        printf("So %d không chia het cho 3 hoac 5.\n", soNguyen);
    }
    return 0;
	} 
	 


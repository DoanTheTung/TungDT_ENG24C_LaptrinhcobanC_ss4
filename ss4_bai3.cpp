#include <stdio.h>

int main(){
	//khai bao so nguyen can nhap
	int soNguyen;
	//nhap so nguyen can kiem tra 
	printf ("nhap so nguyen can kiem tra : ");
	scanf("%d", &soNguyen);
	//kiem tra va in ra man hinh ket qua
	if (soNguyen % 3 == 0 && soNguyen % 5 == 0) {
        printf("So %d chia het cho ca 3 v� 5.\n", soNguyen);
    } else if (soNguyen % 3 == 0) {
        printf("So %d chia het cho 3.\n", soNguyen);
    } else if (soNguyen % 5 == 0) {
        printf("So %d chia het cho 5.\n", soNguyen);
    } else {
        printf("So %d kh�ng chia het cho 3 hoac 5.\n", soNguyen);
    }
    return 0;
	} 
	 


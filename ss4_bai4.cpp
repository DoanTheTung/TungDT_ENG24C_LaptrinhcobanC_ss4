#include <stdio.h>

int main(){
	//khai bao thang can kiem tra
	int thang;
	//nhap so nguyen can kiem tra 
	printf ("nhap thang can kiem tra : ");
	scanf("%d", &thang);
	//kiem tra va in ra man hinh so ngay cua thang
	switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d c� 31 ng�y.\n", thang);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d c� 30 ng�y.\n", thang);
            break;
        case 2:
            printf("Thang 2 c� 28 hoac 29 ng�y (nam nhuan).\n");
            break;
        default:
            printf("So thang kh�ng hop le.\n");
    }
    return 0;
	} 
	 


#include <stdio.h>

int main(){
	//khai bao so nguyen can nhap
	int soNguyen;
	//nhap so nguyen can kiem tra 
	printf ("nhap so nguyen can kiem tra : ");
	scanf("%d", &soNguyen);
	//kiem tra va in ra man hinh ket qua
	if(soNguyen > 0){
		printf("so %d l� so nguyen duong.\n", soNguyen );
    } else if (soNguyen < 0) {
        printf("so %d l� so nguyen am.\n", soNguyen);
    } else {
        printf("so vua nhap la so 0 (kh�ng �m, kh�ng d��ng).\n");
    }

    return 0;
	} 
	 


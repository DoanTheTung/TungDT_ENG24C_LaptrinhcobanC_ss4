#include <stdio.h>

int main(){
	//khai bao so nguyen can nhap
	int soNguyen;
	//nhap so nguyen can kiem tra 
	printf ("nhap so nguyen can kiem tra : ");
	scanf("%d", &soNguyen);
	//kiem tra va in ra man hinh ket qua
	if(soNguyen %2 == 0){
		printf("so %d là so chan.\n", soNguyen );
    } else if (soNguyen %2 != 0 ) {
        printf("so %d là so le.\n", soNguyen);
    } else {
        printf("so vua nhap ko la so chan va so le.\n");
    }

    return 0;
	} 
	 


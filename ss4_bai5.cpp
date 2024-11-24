#include <stdio.h>

int main(){
	//khai bao 3 so nguyen can kiem tra
	int so1;
	int so2;
	int so3;
	//nhap 3 so nguyen can kiem tra
	printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    printf("Nhap so thu ba: ");
    scanf("%d", &so3);
    //kiem tra so thu ba co nam trong giua khoang so thu nhat va so thu hai hay khong
    if ((so3 >= so1 && so3 <= so2) || (so3 >= so2 && so3 <= so1)) {
        printf("So %d nam trong khoang giua %d và %d.\n", so3, so1, so2);
    } else {
        printf("So %d khong nam trong khoang giua %d và %d.\n", so3, so1, so2);
    }
    return 0;
	} 
	 


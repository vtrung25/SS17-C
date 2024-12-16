#include<stdio.h>

void allIndex(int *arr, int *n);
void printfIndex(int *arr, int *n);
void lengthStr(int *arr, int *n);
int Sum(int *arr, int *n);
void maxIndex(int *arr, int *n);
int main(){
	int choice;
	int n = 0;
	int *arr; 




	do{
	
	printf("                    MENU\n");
	printf("1.Nhap so phan tu va gia tri cac phan tu\n");
	printf("2.Hien thi cac phan tu trong mang\n");
	printf("3.Tinh do dai mang\n");
	printf("4.Tinh tong cac phan tu trong mang\n");
	printf("5.Hien thi phan tu lon nhat\n");
	printf("6.Thoat\n");
	printf("Moi ban lua chon chuc nang ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
		  allIndex(&arr, &n);
			break;
		case 2:
			printfIndex(arr, n);
			break;
		case 3:
		
		    break;
		case 4:
		
				
		    break;
		case 5:
			maxIndex(arr, n);
			break;
		default :
		printf("Lua chon khong hop le");
			
}
}while(choice!=6);
return 0;
}
void allIndex(int *arr, int *n){
	

    printf("Hay nhap so phan tu cua mang: ");
	scanf("%d",n);
	if(n < 1){
		printf("So phan tu khong hop le\n");
		n = 0;
	}
	else{
		*arr = (int *)malloc((*n) * sizeof(int));
		for (int i = 0;i < *n;i++){
			printf("Phan tu thu %d = ",i + 1);
			scanf("%d",(*arr) + i);
    	}
	}
}
void printfIndex(int *arr, int *n){
	if(n == 0){
		printf("Mang dang chua co phan tu\n");
	}
	else{
		printf("Mang: ");
		for (int i = 0;i < n;i++){
			printf("%d ",*(arr + i));
		}
	}
			
}


Sum(int *arr, int *n){
	if(n == 0){
		printf("Mang dang trong\n");
	}
	else{
		int Tong;
		for (int i = 0;i < n;i++){
			Tong += *(arr + i);
		}
		return Tong;
	}
}
void maxIndex(int *arr, int *n){
	if(n == 0){
		printf("Mang dang chua co phan tu\n");
	}
	else{
		int Max = *(arr + 0);
		for (int i = 0;i < n;i++){
			if(*(arr + i) > Max){
				Max = *(arr + i);
			}
		}
		printf("Phan tu lon nhat trong mang la: %d",Max);
	}
}

	

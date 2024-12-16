#include<stdio.h>
#include<string.h>
#include<ctype.h>
void string(char *str);
void printfString(char *str);
int text(char *str);
int num(char *str);
int kiTu(char *str);
int main(){
	int choice;
	char str[100];
	




	do{
	
	printf("                    MENU\n");
	printf("1. Nhap vao chuoi\n");
	printf("2. In ra chuoi\n");
	printf("3. Dem so luong chu cai\n");
	printf("4. Dem so luong chu so\n");
	printf("5. Dem so luong ky tu dac biet\n");
	printf("6.Thoat\n");
	printf("Moi ban lua chon chuc nang ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
		  string(str);
			break;
		case 2:
			printfString(str);
			break;
		case 3:
		printf("So luong chu cai la %d\n", text(str));
		    break;
		case 4:
		printf("So luong chu so la %d\n", num(str));
				
		    break;
		case 5:
			printf("So luong ki tu dac biet la %d\n", kiTu(str));
			break;
		default :
		printf("Lua chon khong hop le");
			
}
}while(choice!=6);
return 0;
}
void string(char *str){
		printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
}
void printfString(char *str){
	printf("Chuoi vua nhap la: %s\n", str);
}
int text(char *str){
	int count = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count;
}
int num(char *str){
	int count = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    return count;
}
int kiTu(char *str){
	int count = 0;
    while (*str != '\0') {
        if (!isalpha(*str) && !isdigit(*str) && *str != ' ' && *str != '\0') {
            count++;
        }
        str++;
    }
    return count;
}
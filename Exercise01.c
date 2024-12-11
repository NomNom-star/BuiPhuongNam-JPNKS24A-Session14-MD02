#include<stdio.h>
#include<string.h>
int main(){

    char str[1000];
    printf(" Nhap chuoi ki tu: \n");
    fgets(str, sizeof(str), stdin);
    printf(" Do dai cua chuoi la : %d", strlen(str));

    return 0;
}
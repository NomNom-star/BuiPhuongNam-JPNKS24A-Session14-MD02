#include<stdio.h>
int main(){

    char string[] = "Hello VietNam";
    int length = sizeof(string)/sizeof(char);
    int count = 0;
    char character;
    printf(" Nhap ki tu ban muon dem so luong: \n");
    scanf("%c",&character);
    for (int i = 0; i < length -1 ; i++){
        if(string[i] == character){
            count ++;
        }
    }
    printf(" Ky tu %c xuat hien %d lan trong chuoi", character, count);

    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){

    char string[1000] ;
    int length = sizeof(string)/sizeof(char);
    int count = 1;
    char space = ' ';
    printf(" Nhap chuoi bat ki:\n");
    fgets(string, length, stdin);
    for (int i = 0; i < strlen(string) -1 ; i++){
        if(string[i] == space){
            count ++;
        }
    }
    printf(" So tu trong chuoi la %d ", count);

    return 0;
}
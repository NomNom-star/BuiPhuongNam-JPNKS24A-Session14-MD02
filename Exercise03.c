#include<stdio.h>
int main(){

    char string[] = "Hello VietNam";
    int length = sizeof(string)/sizeof(char);
    for (int i = length -1; i >= 0 ; i--)
    {
        printf("%c ", string[i]);
    }

    return 0;
}
#include <stdio.h>
#include <conio.h>

void main(){
    char ch;
    char pwd[20];
    int i=0;
    printf("Enter Password :");
    while((ch=getch())!=13){
        pwd[i]=ch;
        i++;
        printf("*");
    }
    printf("\nPassword is %s", pwd);

}

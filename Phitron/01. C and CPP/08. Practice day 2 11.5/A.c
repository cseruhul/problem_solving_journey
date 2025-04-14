#include<stdio.h>
#include<string.h>


int main(){
    char ch[100];
    fgets(ch, 100, stdin);
    fputs(ch, stdout);
    return 0;
}
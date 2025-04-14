#include <stdio.h>

int main()
{
    int n=0, i, j;
    char ch = 'A';

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%c ", ch);
        }
        ch++;
        printf("\n");
    }

    return 0;
}

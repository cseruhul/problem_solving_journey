#include <stdio.h>
void print_recursion(int n, char *ch)
{
    if (n == 0)
        return;

    printf("%s\n", ch);
    print_recursion(n - 1, ch);
}

int main()
{
    int n;
    scanf("%d", &n);
    char str[] = "I love Recursion";
    print_recursion(n, str);

    return 0;
}
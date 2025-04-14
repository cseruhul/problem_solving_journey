#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_operation(char ch1[], char ch2[], char ch3[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ch1[i] != ch2[i])
        {
            // printf("%c %c\n", ch1[i], ch2[i]);
            count++;
        }
        if (ch1[i] != ch3[i])
        {
            // printf("%c %c\n", ch1[i], ch2[i]);
            count++;
        }
    }
    return count;
}

int min_val(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    char ch1[102], ch2[102], ch3[102], n, operation = 0, op_val = 0;
    scanf("%s %s %s", ch1, ch2, ch3);
    n = strlen(ch1);

    // printf("%s %s %s\n", ch1, ch2, ch3);
    // printf("%d %d %d\n", strlen(ch1), strlen(ch2), strlen(ch3));

    operation = count_operation(ch1, ch2, ch3, n);

    op_val = count_operation(ch2, ch1, ch3, n);
    operation = min_val(operation, op_val);

    op_val = count_operation(ch3, ch2, ch1, n);
    operation = min_val(operation, op_val);

    printf("%d\n", operation);

    return 0;
}

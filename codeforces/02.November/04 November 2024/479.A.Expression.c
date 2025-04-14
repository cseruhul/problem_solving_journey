#include <stdio.h>
/*
a + b + c
a + b * c
(a + b) * c
a * b + c
a * (b + c)
a * b * c

 */

int main()
{
    int a, b, c, d, ans;
    scanf("%d\n%d\n%d", &a, &b, &c);
    // printf("%d\n%d\n%d", a, b, c);
    d = a + b + c;
    ans = d;
    d = a + b * c;
    ans = (ans > d) ? ans : d;
    d = (a + b) * c;
    ans = (ans > d) ? ans : d;
    d = a * b + c;
    ans = (ans > d) ? ans : d;
    d = a * (b + c);
    ans = (ans > d) ? ans : d;
    d = a * b * c;
    ans = (ans > d) ? ans : d;

    printf("%d", ans);
    return 0;
}
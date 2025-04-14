#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, m1, m2, d1, d2;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d", &m1, &m2, &d1);

        d2 = (m1 * d1) / (m1 + m2);

        printf("%d\n", d1 - d2);
    }

    return 0;
}

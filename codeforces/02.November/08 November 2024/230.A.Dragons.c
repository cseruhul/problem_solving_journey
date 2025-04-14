#include <stdio.h>
struct dragon
{
    int x;
    int y;
};

int main()
{
    int s, n, x, y, flag = 1;
    scanf("%d %d", &s, &n);
    struct dragon dr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &dr[i].x, &dr[i].y);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (dr[j].x > dr[j + 1].x)
            {
                struct dragon temp = dr[j];
                dr[j] = dr[j + 1];
                dr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (dr[i].x < s)
        {
            flag = 1;
            s += dr[i].y;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
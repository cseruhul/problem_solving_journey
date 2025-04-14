#include <stdio.h>

int main()
{
    int n, sereja = 0, dima = 0;
    scanf("%d", &n);
    int cards[n + 5];
    int left = 0, right = n - 1, turn = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cards[i]);
    }

    while (left <= right)
    {
        if (cards[left] >= cards[right])
        {
            if (turn == 0)
            {
                sereja += cards[left];
            }
            else
            {
                dima += cards[left];
            }
            left++;
        }
        else
        {
            if (turn == 0)
            {
                sereja += cards[right];
            }
            else
            {
                dima += cards[right];
            }
            right--;
        }
        turn = 1 - turn;
    }

    printf("%d %d", sereja, dima);
    return 0;
}
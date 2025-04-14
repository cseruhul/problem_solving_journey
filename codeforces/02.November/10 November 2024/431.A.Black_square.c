#include <stdio.h>
#include <string.h>

int main()
{
    int arr[5], calories = 0;
    char ch[100005];
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
    scanf("%s", &ch);
    int n = strlen(ch);
    // printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);

    for (int i = 0; i < n; i++)
    {
        calories += arr[ch[i] - '0' - 1];
    }

    printf("%d", calories);

    return 0;
}
t = int(input())

for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    ans = float("inf")
    sum = 0
    for i in range(n):
        for j in range(i + 1, n):
            sum = arr[i] + arr[j] + j - i
            ans = min(ans, sum)

    print(ans)

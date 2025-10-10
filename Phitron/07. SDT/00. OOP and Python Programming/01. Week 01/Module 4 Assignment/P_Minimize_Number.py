from math import inf


n = int(input())

arr = list(map(int, input().split()))

ans = inf
flag = True

for i in range(n):
    counter = 0
    while arr[i] % 2 == 0:
        arr[i] = arr[i] / 2
        counter += 1
    ans = min(ans, counter)
print(ans)

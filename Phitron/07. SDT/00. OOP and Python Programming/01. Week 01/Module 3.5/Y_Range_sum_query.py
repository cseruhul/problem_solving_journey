n, q = map(int, input().split())

arr = list(map(int, input().split()))

pref_sum = []
current_sum = 0

for item in arr:
    current_sum += item
    pref_sum.append(current_sum)

while q:
    L, r = map(int, input().split())
    L -= 1
    r -= 1
    ans = 0
    if L == 0:
        ans = pref_sum[r]
    else:
        ans = pref_sum[r] - pref_sum[L - 1]
    print(ans)
    q -= 1

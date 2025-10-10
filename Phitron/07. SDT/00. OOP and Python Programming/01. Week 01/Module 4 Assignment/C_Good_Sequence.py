from collections import defaultdict


n = int(input())

arr = map(int, input().split())

ans = 0
mp = defaultdict(int)

for item in arr:
    mp[item] += 1

for k in mp:
    if k > mp[k]:
        ans += mp[k]
    else:
        ans += mp[k] - k

print(ans)

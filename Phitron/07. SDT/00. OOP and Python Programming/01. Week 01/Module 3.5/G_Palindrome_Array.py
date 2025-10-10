n = int(input())

arr = list(map(int, input().split()))

rev_arr = arr

if arr[::-1] == rev_arr:
    print("YES")
else:
    print("NO")

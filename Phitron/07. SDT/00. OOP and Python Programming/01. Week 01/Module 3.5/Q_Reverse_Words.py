string_arr = input().split()
ans = ""

for item in string_arr:
    ans += item[::-1] + " "

print(ans[:-1])

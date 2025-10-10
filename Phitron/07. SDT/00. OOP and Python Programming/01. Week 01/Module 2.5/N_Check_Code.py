a, b = map(int, input().split())
s = input()
cnt = 0

for item in s:
    if item == "-":
        cnt += 1

if cnt == 0 or cnt > 1:
    print("No")
elif s[a] == "-":
    print("Yes")
else:
    print("No")

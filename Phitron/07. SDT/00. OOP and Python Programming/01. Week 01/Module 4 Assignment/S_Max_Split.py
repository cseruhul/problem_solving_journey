s = input()

ans = []

n = len(s)
L = 0
R = 0
bal_str = ""
for i in range(n):
    if s[i] == "L":
        L += 1
        bal_str += s[i]
    else:
        R += 1
        bal_str += s[i]

    if L == R and L != 0:
        ans.append(bal_str)
        bal_str = ""
        L = 0
        R = 0


print(len(ans))
for item in ans:
    print(item)

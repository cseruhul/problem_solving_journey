n = int(input())
x = n
rev = 0

while n != 0:
    rev = rev * 10 + n % 10
    n = n // 10

print(rev)
if x == rev:
    print("YES")
else:
    print("NO")

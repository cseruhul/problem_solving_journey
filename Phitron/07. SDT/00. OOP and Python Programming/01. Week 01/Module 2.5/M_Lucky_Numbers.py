a, b = map(int, input().split())
isEmpty = False
flag = False


for i in range(a, b + 1):
    n = i
    flag = False
    while n:
        temp = n % 10
        n = n // 10

        if temp != 4 and temp != 7:
            flag = True
            break

    if not flag:
        isEmpty = True
        print(i, end=" ")

if not isEmpty:
    print("-1")

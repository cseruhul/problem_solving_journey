def nums(*numbers):
    sum = 0

    for item in numbers:
        sum += item

    return sum


ans = nums(10, 20, 30, 40, 50)

print(ans)

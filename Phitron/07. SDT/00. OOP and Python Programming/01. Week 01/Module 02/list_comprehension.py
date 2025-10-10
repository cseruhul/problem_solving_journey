number = [4, 100, 102, 5, 87, 43, 85, 14, 26, 61]
odds = [11]

for item in number:
    if item % 2 and item % 5 == 0:
        odds.append(item)

print(odds)

odd_numbers = [item for item in number if item % 2 == 1]
print(odd_numbers)

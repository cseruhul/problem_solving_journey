numbers = [12, 15, 14]

numbers.append(10)

print(numbers)

numbers.insert(0, 71)

print(numbers)

numbers.remove(71)
print(numbers)

if 100 in numbers:
    numbers.remove(100)
else:
    print("100 is not present in this list.")


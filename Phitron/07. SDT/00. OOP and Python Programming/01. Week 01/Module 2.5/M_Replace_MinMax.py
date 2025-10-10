n = int(input())

arr = list(map(int, input().split()))
max_index = 0
max_val = arr[0]

min_index = 0
min_val = arr[0]
i = 0
for item in arr:
    if item >= max_val:
        max_val = item
        max_index = i
    elif item <= min_val:
        min_val = item
        min_index = i
    i += 1

arr[min_index], arr[max_index] = arr[max_index], arr[min_index]

for item in arr:
    print(item, end=" ")

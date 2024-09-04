x = input()
arr = x.split()

a = int(arr[0])
b = int(arr[1])
c = int(arr[2])

total = a + b + c
avg = (a + b + c) // len(arr)
print(total)
print(avg)
print(total - avg)
x = input()
arr = x.split()

a = int(arr[0])
b = int(arr[1])

a += b
b += a
print(a,b)
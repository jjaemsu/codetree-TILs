x = input()
arr = x.split()

a = int(arr[0])
b = int(arr[1])
c = int(arr[2])

max = a

if max < b:
    max = b
if max < c:
    max = c
print(max)
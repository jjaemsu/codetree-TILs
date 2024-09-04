a = input()
arr = a.split()

a = int(arr[0])
b = int(arr[1])
c = int(arr[2])
total = a + b + c
print(total)
print("{0}".format(total // len(arr)))
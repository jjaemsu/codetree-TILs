a = input()

arr = a.split()

a = int(arr[0])
b = int(arr[1])

print("{0}...{1}".format(a // b, a % b))
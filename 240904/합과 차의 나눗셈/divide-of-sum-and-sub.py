x = input()
arr = x.split()

a = int(arr[0])
b = int(arr[1])

print("{0:.2f}".format((a + b) / (a - b)))
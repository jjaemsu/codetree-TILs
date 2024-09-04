x = input()
arr = x.split()

width = int(arr[0])
length = int(arr[1])
width += 8
length *= 3

print(width)
print(length)
print(width * length)
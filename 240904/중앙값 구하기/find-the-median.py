x = input().split()

a = int(x[0])
b = int(x[1])
c = int(x[2])

if a > b and a > c:
    if b > c:
        print(b)
    else:
        print(c)

if b > a and b > c:
    if a > c:
        print(a)
    else:
        print(c)

if c > a and c > b:
    if a > b:
        print(a)
    else:
        print(b)
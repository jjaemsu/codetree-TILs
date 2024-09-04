n = int(input())

cnt = 0

for i in range(4, n, 4):

    if(i % 400 == 0):
        cnt += 1
    elif(i % 100 == 0):
        continue
    else:
        cnt += 1

print(cnt)
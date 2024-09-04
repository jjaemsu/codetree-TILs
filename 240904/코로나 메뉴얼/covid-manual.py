A, B, C, D = 0, 0, 0, 0
x = input()
person = x.split()
person_symp = str(person[0])
person_temp = int(person[1])
if person_symp == 'Y' and person_temp >= 37:
    A += 1

elif person_symp == 'N' and person_temp >= 37:
    B += 1

elif person_symp == 'Y':
    C += 1

else:
    D += 1
x = input()
person = x.split()
person_symp = str(person[0])
person_temp = int(person[1])
if person_symp == 'Y' and person_temp >= 37:
    A += 1

elif person_symp == 'N' and person_temp >= 37:
    B += 1

elif person_symp == 'Y':
    C += 1

else:
    D += 1
x = input()
person = x.split()
person_symp = str(person[0])
person_temp = int(person[1])
if person_symp == 'Y' and person_temp >= 37:
    A += 1

elif person_symp == 'N' and person_temp >= 37:
    B += 1

elif person_symp == 'Y':
    C += 1

else:
    D += 1

    



if A >= 2:
    print('E')
else:
    print('N')
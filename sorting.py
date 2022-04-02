l = ""
u = ""
o = ""
e = ""

s = sorted(input())
for i in s:
    if i.islower():
        l += i
    elif i.upper():
        u += i
    elif int(i) % 2 != 0:
        o += i
    elif int(i) % 2 == 0:
        e += i
    else:
        pass

print(l+u+o+e)
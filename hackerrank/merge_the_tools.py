s = "AABCAAADA"
k = 3


for i in range(0,len(s),k):
    line = s[i:i+k]
    seen = set()
    for c in line:
        if c not in seen:
            print(c,end="")
            seen.add(c)

    print()

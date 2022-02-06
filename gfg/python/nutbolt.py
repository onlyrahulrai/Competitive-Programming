def nutBoltmatch(nuts,bolts,n):
    hash1 = {}

    for i in range(n):
        hash1[nuts[i]] = i

    for i in range(n):
        if bolts[i] in hash1:
            nuts[i] = bolts[i]

    print("matched nuts and bolts are - ")

    for i in range(n):
        print(nuts[i],end=" ")

    print()
    
    for i in range(n):
        print(bolts[i],end=" ")



nuts = ['@', '#', '$',
            '%', '^', '&']
bolts = ['$', '%', '&',
             '^', '@', '#']

nutBoltmatch(nuts,bolts,len(nuts))
def romanToInt(rom):
    value = {
        "I":1,
        "V":5,
        "X":10,
        "L":50,
        "C":100,
        "D":500,
        "M":1000
    }

    p = 0

    ans = 0

    for i in range(len(rom) - 1,-1,-1):
        if(value[rom[i]] >= p):
            ans += value[rom[i]]
        else:
            ans -= value[rom[i]]


        p = value[rom[i]]
    
    print(ans)

romanToInt("XII")
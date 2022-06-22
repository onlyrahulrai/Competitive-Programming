t = int(input())

while (t != 0):
    n = int(input())
    d = input()

    flag = False

    for i in range(n):
        if d[i] == "0" or d[i] == "5":
            flag = True

    t -= 1

    if flag:
        print("Yes")
    else:
        print("No")
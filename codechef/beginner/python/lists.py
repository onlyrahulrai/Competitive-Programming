items = []
n = int(input("Enter the range you want: "))

for i in range(n):
    s = input().strip().split(" ")
    if s[0] == "insert":
        items.insert(int(s[1]),int(s[2]))
    elif s[0] == "print":
        print(items)
    elif s[0] == "remove":
        items.remove(int(s[1]))
    elif s[0] == "append":
        items.append(int(s[1]))
    elif s[0] == "sort":
        items.sort()
    elif s[0] == "pop":
        items.pop()
    elif s[0] == "reverse":
        items.reverse()
    else:
        pass 
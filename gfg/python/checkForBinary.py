def isBinary(str):
    for s in str:
        if s == "1" or s == "0":
            continue
        else:
            return 0
    return 1

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        str = input().strip()
        if isBinary(str):
            print(1)
        else:
            print(0) 
t = int(input())
while (t):
    n,m,k = map(int,input().split())

    if(n+k <= m):
        print("Yes")
    else:
        print("No")

    t -= 1
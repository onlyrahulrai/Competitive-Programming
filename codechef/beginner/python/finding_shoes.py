t = int(input())
while t:
    n,m = map(int,input().split())
    print(n) if n <= m else print(n*2-m)
    t -= 1
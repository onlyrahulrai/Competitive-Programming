t = int(input())

l = []

for i in range(t):
    lst = list(map(int,input().split()))
    l.extend(lst)
    l.sort()

print(l[0],l[t-1])
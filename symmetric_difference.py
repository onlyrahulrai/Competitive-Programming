a,*b = input().split(" ")
c,*d =  input().split(" ")

x=set(b)
y=set(d)

# Method 1

r = x.symmetric_difference(y)

# Method 2
# p=y.difference(x)
# q=x.difference(y)
# r=p.union(q)

print ('\n'.join(sorted(r, key=int)))
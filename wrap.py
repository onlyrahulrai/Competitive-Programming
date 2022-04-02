s = "ABCDEFGHIJKLIMNOQRSTUVWXYZ"
length = 4
print("\n".join([s[i:i+length] for i in range(0,len(s),length)]))
k = 3
elements = [1,2,3,4,5]



for i in range(0,len(elements),k):
    if i>len(elements) - k:
        elements[i:] = reversed(elements[i:]) 
    else:
        elements[i:i+k] = reversed(elements[i:i+k])


print(elements)



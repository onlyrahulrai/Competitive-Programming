def kthSmallest(elements,k):
    elements.sort()
    return elements[k-1]

elements = [2,4,1,3,5,8,7,9,10]
k = 3

print(kthSmallest(elements,k))
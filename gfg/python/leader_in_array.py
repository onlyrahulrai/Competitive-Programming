def printLeaders(elements,size):
    for i in range(0,size):
        for j in range(i+1,size):
            if elements[i] <= elements[j]:
                break

        if j == (size - 1):
            print(elements[i])

# Driver function
arr=[16, 17, 4, 3, 5, 2]
printLeaders(arr, len(arr))
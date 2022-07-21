values = [1,2,3,4,5]
values.sort()
_values = []
for i in range(0,len(values) - 3):
    temp = 0
    for j in range(i,i+4):
        temp = temp + values[j]

    _values.append(temp)

print(min(_values)),max(_values)

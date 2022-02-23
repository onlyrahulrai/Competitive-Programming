from turtle import position


items = [1,5]

position = []
for i in range(len(items)):
    if items[i] == 5:
        position.append(i)
        break



for i in range(len(items)-1,-1,-1):
    if items[i] == 5:
        position.append(i)
        break

print(position)
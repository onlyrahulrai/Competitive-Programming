items = [0, 1, 2, 3, 4]
odd = []
even = []

new_items = []

for item in items:
    if item % 2 == 0:
        even.append(item)
    else:
        odd.append(item)

new_items.extend(even)
new_items.extend(odd)

print(new_items)
    

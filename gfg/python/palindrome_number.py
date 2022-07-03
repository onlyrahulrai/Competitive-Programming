elements = [111,222,333,444,555]

print(all([True  if int(str(element)[::-1]) == element else False for element in elements]))
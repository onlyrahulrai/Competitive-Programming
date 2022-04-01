student_marks = {}
for _ in range(int(input("Enter the range you want: "))):
    name,*line = input().split(" ")
    scores = list(map(float,line))
    student_marks[name] = scores

query_name = input("Enter the name that you want to calculate the average of scores: ")


avg = sum(student_marks[query_name])/len(student_marks[query_name])

print("{0:.2f}".format(avg))
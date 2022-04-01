students = []
second_lowest_names = []
scores = set()
for _ in range(int(input("Enter the range that you want: "))):
    name = input("Enter your name: ")
    score = float(input("Enter the score: "))
    students.append([name,score])
    scores.add(score)


second_lowest = sorted(scores)[1]

for name,score in students:
    if score == second_lowest:
        second_lowest_names.append(name)

for name in sorted(second_lowest_names):
    print(name)
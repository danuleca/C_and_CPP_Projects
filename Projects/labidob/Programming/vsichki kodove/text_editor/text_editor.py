f = open("textfile.txt", 'r')
list_of_lines = f.readlines()
while True:
    line = int(input("Enter the line you want to edit(Type 0 to stop editing): "))
    if line == 0:
        break
    list_of_lines[line] = input("Enter you want on the line:")
f = open("textfile.txt", "w")
f = writelines(list_of_lines)
f.close()
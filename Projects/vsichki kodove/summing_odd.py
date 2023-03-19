f = open("in.txt", 'r')
sum = 0
for i, l in enumerate(f):
    value = int(l)
    if i % 2 == 1 and value % 2 == 0:
        sum += value
f.close() 
f = open("out.txt", "w")
f.write(str(sum))
f.close()
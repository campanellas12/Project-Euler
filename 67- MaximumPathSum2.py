#Find the maximum total from top to bottom in triangle.txt, a text file
#containing a triangle with one-hundred rows.

mat = []

#Generate the triangle as a matrix
f= open("triangle.txt", "r")
content = f.readlines()
for line in content:
    this = line.split(' ')
    add = []
    for i in this:
        add.append(int(i))
    mat.append(add)


maxN = mat[0][0]
idx = 0

for i in range(1,len(mat)):
    for j in range(0,len(mat[i])):
        if j == 0:
            mat[i][j] += mat[i-1][0]
        elif j == len(mat[i]) - 1:
            mat[i][j] += mat[i-1][j-1]
        else:
            mat[i][j] += max(mat[i-1][j-1], mat[i-1][j])


print(max(mat[-1]))

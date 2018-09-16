
grid = [['.', '.', '.','.', '.', '.' ],
        ['.', 'O', 'O', '.', '.', '.'],
        ['O', 'O', 'O', 'O', '.', '.'],
        ['O', 'O', 'O', 'O', 'O', '.'],
        ['.', 'O', 'O', 'O', 'O', 'O'],
        ['O', 'O', 'O', 'O', 'O', '.'],
        ['O', 'O', 'O', 'O', '.', '.'],
        ['.', 'O', 'O', '.', '.', '.'],
        ['.', '.', '.', '.', '.', '.']]
k = 0
row = len(grid)
Colomn = len(grid[1])

for i in range(Colomn):
    for j in range(row):
       print(grid[j][i], end=' ')
    print()

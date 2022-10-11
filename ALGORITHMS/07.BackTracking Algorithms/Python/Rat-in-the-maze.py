# Backtracking
 
# Intialising Maze size
n = 4
 
# a useful function to determine the validity of x and y
# index for N * N Maze
 
 
def isValid(n, maze, x, y, res):
    if x >= 0 and y >= 0 and x < n and y < n and maze[x][y] == 1 and res[x][y] == 0:
        return True
    return False
 
# a utility function that solves the Maze problem recursively
 
def RatMaze(n, maze, movex, movey, x, y, res):
    # if (x, y is goal) return True
    if x == n-1 and y == n-1:
        return True
    for i in range(4):

        # Create a fresh value for  y
        newy = y + movey[i]


        # Create a fresh value for  x
        newx = x + movex[i]
 
        
        # Check if maze[x][y] is valid
        if isValid(n, maze, newx, newy, res):
 
            # mark x, y as part of solution path
            res[newx][newy] = 1
            if RatMaze(n, maze, movex, movey, newx, newy, res):
                return True
            res[newx][newy] = 0
    return False
 
 
def solveMaze(maze):
    # Creating a 4 * 4 2-D list
    res = [[0 for i in range(n)] for i in range(n)]
    res[0][0] = 1
 
    # x matrix for each direction
    movex = [-1, 1, 0, 0]
 
    # y matrix for each direction
    movey = [0, 0, -1, 1]
 
    if RatMaze(n, maze, movex, movey, 0, 0, res):
        for i in range(n):
            for j in range(n):
                print(res[i][j], end=' ')
            print()
    else:
        print('Solution does  not exist')
 
 
# programme for testing the above functionality
if __name__ == "__main__":
    # Initialising the maze
    maze = [[1, 0, 0, 0],
             [1, 1, 0, 0],
             [0, 1, 0, 0],
             [1, 1, 1, 1]]
 
    solveMaze(maze)


#  Output:

# 1 0 0 0 
# 1 1 0 0
# 0 1 0 0
# 0 1 1 1

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


//Given a m x n grid filled with non-negative numbers, find a minimum path sum from top left 
//to bottom right, which minimizes the sum of all numbers along its path.
//allowed moves :  either down or right at any point in time.

public class MinimumPathSum {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(bf.readLine());

        while (t-- > 0) {
            String a[] = bf.readLine().trim().split(" ");
            //mxn matrix
            int m = Integer.parseInt(a[0]);
            int n = Integer.parseInt(a[1]);

            int grid[][] = new int[m][n];

            for(int i=0;i<m;i++){
                String str[] = bf.readLine().split(" ");
                for (int j=0;j<n;j++){
                    grid[i][j] = Integer.parseInt(str[j]);
                }
            }

            int ans = minimumPathSum(grid);
            System.out.println(ans);
        }
    }

    // function to find minimum path sum using dp
    // Suppose the minimum path sum of arriving at point (i, j) is S[i][j],
    // then the state equation is S[i][j] = min(S[i - 1][j], S[i][j - 1]) + grid[i][j].

    //O(m*n) time complexity
    //O(1) space complexity
    private static int minimumPathSum(int[][] grid) {

        int rows = grid.length;
        int cols = grid[0].length;

        for(int i = 0; i < rows; i++) {
            for( int j = 0; j < cols; j++) {
                if(i == 0 && j != 0)  {
                    grid[i][j] = grid[i][j] + grid[i][j-1];
                } else if(i != 0 && j == 0)  {
                    grid[i][j] = grid[i][j] + grid[i-1][j];

                } else if(i==0 && j==0){
                    grid[i][j] = grid[i][j];
                }
                else{
                    grid[i][j] = grid[i][j] + Math.min(grid[i-1][j] , grid[i][j-1]);
                }
            }
        }
        return grid[rows-1][cols-1];
    }

    // return solve(grid, rows-1, cols-1);

    //recursive approach

//     public int solve(int grid[][], int row, int col) {

//         if(row == 0 && col == 0) return grid[row][col];
//         else if(row == 0 && col != 0)  return (grid[row][col] + solve(grid, row, col-1));
//         else if(row != 0 && col == 0) return (grid[row][col] + solve(grid, row-1, col));
//         else{
//             return grid[row][col] + Math.min(solve(grid, row-1, col), solve(grid, row, col-1));
//         }
//     }
}

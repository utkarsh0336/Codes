/*
Input -> Enter the number of rows and columns of first matrix A
2
2
Enter elements of first matrix
1
2
3
4
Enter the number of rows and columns of second matrix B
2
2
Enter elements of second matrix
1
2
3
4

Output ->   Product of the matrices:
                7     10	
                15    22	

 */
import java.util.Scanner;

public class Question6
{
    public static void main(String args[])
    {
        int m, n, p, q, sum = 0, i, j, k;

        Scanner in = new Scanner(System.in);
        System.out.println("Enter the number of rows and columns of first matrix A");
        m = in.nextInt();
        n = in.nextInt();

        int A[][] = new int[m][n];

        System.out.println("Enter elements of first matrix");

        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                A[i][j] = in.nextInt();

        System.out.println("Enter the number of rows and columns of second matrix B");
        p = in.nextInt();
        q = in.nextInt();

        if (n != p)
            System.out.println("The matrices can't be multiplied with each other.");
        else
        {
            int B[][] = new int[p][q];
            int C[][] = new int[m][q];

            System.out.println("Enter elements of second matrix");

            for (i = 0; i < p; i++)
                for (j = 0; j < q; j++)
                    B[i][j] = in.nextInt();

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < q; j++)
                {
                    for (k = 0; k < p; k++)
                    {
                        sum = sum + A[i][k]*B[k][j];
                    }

                    C[i][j] = sum;
                    sum = 0;
                }
            }

            System.out.println("Product of the matrices:");

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < q; j++)
                    System.out.print(C[i][j]+"\t");

                System.out.print("\n");
            }
        }
    }
}
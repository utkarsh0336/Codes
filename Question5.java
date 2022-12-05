/*
Input -> Size - 5 and Elements are 12 45 34 32 36
Output ->     The Array is 12 45 34 32 36 
              The largest element is 45
 */
import java.util.Scanner;
public class Question5 {
    public static void main(String[] args) {
        int max = Integer.MIN_VALUE;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the Elements");
        for(int i = 0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("The Array is ");
        for(int i = 0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println("\n");
        for(int i = 0;i<n-1;i++) {
            for (int j = 1; j < n - 2; j++) {
                if (arr[i] > arr[j]) {
                    max = arr[i];
                }
            }
        }
        System.out.println("The largest element is " + max);
    }
}
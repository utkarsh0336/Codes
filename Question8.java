/*
Input -> Enter the size of the array
5
Enter the Elements
34
12
42
11
5

Output ->  The unsorted array is
            34 12 42 11 5 

           The Sorted array is
             5 11 12 34 42 
 */
import java.util.Scanner;
public class Question8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the Elements");
        for(int i = 0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("The unsorted array is");
        for(int i = 0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println("\n");
        int temp = 0;
        for(int i=0;i<n-1;i++){
            for(int j = 0;j<(n-i-1);j++){
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            }
        System.out.println("The Sorted array is");
        for(int i = 0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
    }
}

/*
Input -> Enter the size of the array
5
Enter the Elements
23
11
56
43
11

Output -> The First Repeating element is 11
 */
import java.util.Scanner;
import java.util.Arrays;
public class Question7 {
    public static void main(String[] args) {
        int rep = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the Elements");
        for(int i = 0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        for (int i = 0;i<n-1;i++){
               if (arr[i] == arr[i + 1]) {
                    rep = arr[i];
                    break;
                }
        }
        System.out.println("The First Repeating element is " + rep);
    }
}

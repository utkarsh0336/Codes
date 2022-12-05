import java.util.Scanner;
public class Question11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of String array");
        int n = sc.nextInt();
        String name[] = new String[n];
        System.out.println("Enter " + n + " names");
        for (int i = 0; i < n; i++) {
            name[i] = sc.next();
        }
        System.out.println("The names are");
        for (int i = 0; i < n; i++) {
            System.out.print(name[i] + " ");
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (name[i].compareTo(name[j]) > 0) {
                    String temp = name[i];
                    name[i] = name[j];
                    name[j] = temp;
                }
            }
        }
        System.out.println("\n");
        System.out.println("The names in ascending order are");
        for (int i = 0; i < n; i++) {
            System.out.print(name[i] + " ");
        }
    }
}

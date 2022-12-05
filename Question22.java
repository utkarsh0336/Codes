/*
We are opening the previous Question21.java with the help of File Handling as shown in the Screenshot
*/
import java.util.Scanner;
import java.io.*;

public class Question22
{
    public static void main(String[] args)
    {
        String fname;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Name of File: ");
        fname = sc.nextLine();

        String line = null;
        try
        {
            FileReader fileReader = new FileReader(fname);

            BufferedReader bufferedReader = new BufferedReader(fileReader);

            while((line = bufferedReader.readLine()) != null)
            {
                System.out.println(line);
            }

            bufferedReader.close();
        }
        catch(IOException ex)
        {
            System.out.println("\nError occurred");
            System.out.println("Exception Name: " +ex);
        }
    }
}

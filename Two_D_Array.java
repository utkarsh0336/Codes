public class Two_D_Array {
    public static void main(String[] args) {
        int [][]arr = new int [2][2];
        for(int i = 0;i< 4;i++) {
            int n = Integer.parseInt(args[i]);
        }
        for(int i = 0;i<2;i++) {
            arr[0][i] = Integer.parseInt(args[i]);
//            arr[0][1] = Integer.parseInt(args[1]);
        }
        for(int i = 0;i<2;i++) {
            arr[1][i] = Integer.parseInt(args[i+2]);
//            arr[1][i] = Integer.parseInt(args[3]);
        }

        System.out.println("The given array is");

        for(int i = 0;i<2;i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println("\n");
        }
        arr[0][0] = Integer.parseInt(args[3]);
        arr[0][1] = Integer.parseInt(args[2]);
        arr[1][0] = Integer.parseInt(args[1]);
        arr[1][1] = Integer.parseInt(args[0]);

        System.out.println("The reverse array is");

        for(int i = 0;i<2;i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println("\n");
        }


    }
}


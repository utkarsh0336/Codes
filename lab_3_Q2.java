public class lab_3_Q2 {
    public static void main(String[] args) {
        int [][] arr = new int [3][3];
        for(int i = 0;i<9;i++){
            int n = Integer.parseInt(args[i]);
        }
            for(int j = 0;j<3;j++){
                arr[0][j] = Integer.parseInt(args[j]);
            }
            for(int j = 0;j<3;j++){
                arr[1][j] = Integer.parseInt(args[j+3]);
            }
            for(int j = 0;j<3;j++){
                arr[2][j] = Integer.parseInt(args[j+6]);
            }

        System.out.println("The matrix is ");
        for(int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println("\n");
        }
       int max = Integer.MIN_VALUE;
        for(int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                if(arr[i][j]>max){
                    max = arr[i][j];
                }
            }
        }
        System.out.println("The maximum element is " + max);
    }
}

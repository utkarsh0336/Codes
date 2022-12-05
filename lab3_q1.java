public class lab3_q1 {
    public static void main(String[] args) {
       String temp = 0;
        String[][] arr = new String[2][2];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                int n = Integer.parseInt(arr[i][j]);
                int arr[i][j] = n;
            }
        }
        System.out.println("The array is ");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
            for(int b = 0;b<2;b++) {
                int l = Math.floorDiv(arr[b].length, 2);
                for (int i = 0; i < l; i++) {
                    temp = arr[b][i];
                    arr[b][i] = arr[b][2 - i - 1];
                    arr[b][2 - i - 1] = temp;
                }
            }
        System.out.println("The reverse array is ");
        for(int i = 0;i<2;i++){
            for(int j = 0;j<2;j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        }

        }

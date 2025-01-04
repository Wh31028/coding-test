import java.util.Scanner;

public class numCard {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();

        int[][] arr = new int[N][M];
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                arr[i][j] = sc.nextInt();
            }
        }
        int max =0;
        for(int i=0;i<arr.length;i++){
            int low = 100001;
            for(int j=0;j<arr[i].length;j++) {
                if(arr[i][j]<low){
                    low = arr[i][j];
                }
            }
            if(low>max){
                max = low;
            }
        }
        System.out.println(max);
    }
}

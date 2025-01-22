import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class EX6_10 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int arr[] = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 1; i < N; i++) { //삽입 정렬
            for (int j = i; j > 0; j--) {
                if (arr[j] > arr[j - 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                } else break;
            }
        }
        for (int i = 0; i < N; i++) {
            System.out.print(arr[i] + " ");
        }
        //        Integer arr[] = new Integer[N];
//        Arrays.sort(arr, Collections.reverseOrder());
    }
}

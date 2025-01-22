import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
import java.util.stream.IntStream;

public class EX6_12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        Integer arrA[] = new Integer[N];
        Integer arrB[] = new Integer[N];
        for(int i=0;i<N;i++){
            arrA[i] = sc.nextInt();
        }
        for(int i=0;i<N;i++){
            arrB[i] = sc.nextInt();
        }
        Arrays.sort(arrA);
        Arrays.sort(arrB, Collections.reverseOrder());

        for(int i=0;i<K;i++){
            if(arrA[i]<arrB[i]){
                Integer temp = arrA[i];
                arrA[i] = arrB[i];
                arrB[i] = temp;
            }else break;
        }
        int result = 0;
        for(int i=0;i<N;i++){
            result+=arrA[i];
        }
        System.out.println(result);
    }
}

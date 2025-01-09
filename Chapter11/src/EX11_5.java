import java.util.Scanner;

public class C11_5 {
    public static int[] arr = new int[11];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        for(int i=0;i<N;i++){
            int x = sc.nextInt();
            arr[x]++;
        }

        int result = 0;
        for(int i=1;i<M;i++){
            N -= arr[i];
            result += arr[i] * N;
        }
        System.out.println(result);
    }
}

/*  N^2 으로 푼거
      Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int[] arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }
        int result = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (arr[i] != arr[j]) {
                    result++;
                }
            }
        }
        System.out.println(result);
 */
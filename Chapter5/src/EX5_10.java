import java.util.Scanner;

public class EX5_10 {
    public static int N;
    public static int M;

    private static int[][] arr = new int[1000][1000];

    private static boolean dfs(int y, int x) {
        if (x < 0 || x >= M || y < 0 || y >= N) {
            return false;
        }
        if (arr[y][x] == 0) {
            arr[y][x] = 1;
            dfs(y, x + 1);
            dfs(y, x - 1);
            dfs(y + 1, x);
            dfs(y - 1, x);
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        M = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < N; i++) {
            String line = sc.nextLine();
            for (int j = 0; j < M; j++) {
                arr[i][j] = line.charAt(j) - '0';
            }
        }
        int result = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (dfs(i, j)) {
                    result++;
                }
            }
        }
        System.out.println(result);

    }
}
//4 5
//00110
//00011
//11111
//00000
import java.util.Scanner;

public class EX4_4 {
    private static int[] checkX = {0, 1, 0, -1};
    private static int[] checkY = {-1, 0, 1, 0};

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();

        int[][] map = new int[N][M];
        int userY = sc.nextInt();
        int userX = sc.nextInt();
        int d = sc.nextInt();
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                map[i][j] = sc.nextInt();
            }
        }
        int result = 0;
        int count = 0;
        while (true) {
            int nextX = userX;
            int nextY = userY;
            if (count == 4) {
                if (d == 0) {
                    nextY = userY + 1;
                } else if (d == 1) {
                    nextX = userX - 1;
                } else if (d == 2) {
                    nextY = userY - 1;
                } else if (d == 3) {
                    nextX = userX + 1;
                }

                if(nextY < 1 || nextX < 1 || nextX > M || nextY > M || map[nextY][nextX] == 1) {
                    break;
                }
                userY = nextY;
                userX = nextX;
                count = 0;
            }

            if (d == 0) {
                nextX -= 1;
                d = 3;
            } else if (d == 1) {
                nextY -= 1;
                d = 0;
            } else if (d == 2) {
                nextX +=  1;
                d = 1;
            } else if (d == 3) {
                nextY += 1;
                d = 2;
            }

            if (nextY < 1 || nextX < 1 || nextX > M || nextY > M || map[nextY][nextX] == 1 || map[nextY][nextX] == 2) {
                count++;
                continue;
            } else {
                map[nextY][nextX] = 2;
                result++;
                userX = nextX;
                userY = nextY;
                count = 0;
            }
        }
        System.out.println(result);
    }
}

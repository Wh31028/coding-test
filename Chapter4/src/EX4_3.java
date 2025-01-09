import java.util.Scanner;

public class EX4_3 {
    private static int[] moveX = {2, 2, -2, -2, 1, 1, -1, -1};
    private static int[] moveY = {1, -1, 1, -1, 2, -2, 2, -2};

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        int inputX = input.charAt(0) - 'a' + 1;
        int inputY = input.charAt(1) - '0';

        int result = 0;
        for (int i = 0; i < 8; i++) {
            int nx = inputX + moveX[i];
            int ny = inputY + moveY[i];
            if (nx > 0 && nx < 9 && ny > 0 && ny < 9) {
                result++;
            }
        }
        System.out.println(result);
    }

}

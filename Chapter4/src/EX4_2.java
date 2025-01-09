import java.util.Scanner;

public class EX4_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int count = 0;
        for (int hour = 0; hour <= h; hour++) {
            for (int m = 0; m < 60; m++) {
                for (int s = 0; s < 60; s++) {
                    String time = "" + hour + m + s;
                    if (time.contains("3")) {
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
    }
}

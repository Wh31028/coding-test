import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class multiplyOrAdd {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String[] inputToArr = input.split("");
        for (int i = 0; i < inputToArr.length; i++) {
            list.add(Integer.parseInt(inputToArr[i]));
        }

        int sum = list.get(0);
        for (int i = 1; i < list.size(); i++) {
            if (sum <= 0 || list.get(i) <= 1) {
                sum += list.get(i);
            } else {
                sum *= list.get(i);
            }
        }
        System.out.println(sum);

    }
}

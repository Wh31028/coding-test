import java.util.Arrays;
import java.util.Scanner;

public class adventurerGuild {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] fear = new int[n];
        for(int i = 0; i < fear.length; i++) {
            fear[i] = scanner.nextInt();
        }

        Arrays.sort(fear);

        int totalCount = 0;
        int count = 0;
        int pre = 0;
        int now = 0;
        for(int i = 0; i < fear.length; i++) {
            if(fear[i] == 1){
                totalCount++;
            }else{
                pre = now;
                now = fear[i];
                count++;
                if(pre==now && count == now){
                    totalCount++;
                    count  =0;
                }
            }
        }
        System.out.println(totalCount);
    }
}

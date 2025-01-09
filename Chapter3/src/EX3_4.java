import java.util.Scanner;

public class become1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K =  sc.nextInt();

        int result = 0;

        while(N!=1){
            if(N%K==0){
                result++;
                N = N/K;
            }else{
                N--;
                result++;
            }
        }


        System.out.println(result);
    }
}

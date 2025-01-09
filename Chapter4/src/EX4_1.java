import java.util.Scanner;

public class EX4_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        char[] order = new char[6];
        for (int i = 0; i < 6; i++) {
            order[i] = sc.next().charAt(0);
        }
        int x = 1;
        int y = 1;

        for(int i=0;i<6;i++){
            if(order[i]=='R'&&x<N){
                x++;
            }else if(order[i]=='L'&&x>0){
                x--;
            }else if (order[i]=='U'&&y>1){
                y--;
            }else if(order[i]=='D'&&y<N){
                y++;
            }
        }
        System.out.println(y+" "+x);

    }
}

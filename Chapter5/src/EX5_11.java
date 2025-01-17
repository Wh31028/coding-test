import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class EX5_11  {
    public static int N,M;
    public  static int[][] map = new int[201][201];
    public static int dx[] = {-1,1,0,0};
    public static int dy[] = {0,0,-1,1};

    public static int bfs(int x, int y){
        Queue<Node> q = new LinkedList<>();
        q.offer(new Node(x,y));
        while(!q.isEmpty()){
            Node node = q.poll();
            x = node.getX();
            y = node.getY();
            for(int i=0;i<4;i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx<0||nx>=M||ny<0||ny>=N) continue;
                if(map[ny][nx] ==0) continue;
                if(map[ny][nx]==1){
                    map[ny][nx] = map[y][x]+1;
                    q.offer(new Node(nx,ny));
                }
            }
        }
        return map[N-1][M-1];

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        M = sc.nextInt();
        sc.nextLine();

        for(int i=0;i<N;i++){
            String line = sc.nextLine();
            for(int j=0;j<M;j++){
                map[i][j] = line.charAt(j)-'0';
            }
        }

        System.out.println(bfs(0,0));


    }
}
class Node{
    private int x;
    private int y;

    public Node(int x, int y){
        this.x = x;
        this.y = y;
    }
    public int getX(){
        return x;
    }
    public int getY(){
        return y;
    }
}

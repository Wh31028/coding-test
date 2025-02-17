import java.io.*;
public class Main {

	public static int dp(int[][] result,int N) {
		
		for(int i=2;i<=N;i++) {
			for(int j=0;j<10;j++) {
				for(int k=j;k<10;k++) {
					result[i][j]+=result[i-1][k];
					result[i][j] %= 10007;
				}
			}
		}
		
		int sum= 0;
		for(int i=0;i<10;i++) {
			sum+=result[N][i];
			sum%=10007;
		}
		return sum;
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		
		int result[][] = new int[1001][10];
		
		for(int i=0;i<10;i++) {
			result[1][i] = 1;
		}
		
		System.out.print(dp(result,N));
		

	}

}

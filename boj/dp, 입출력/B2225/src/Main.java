import java.io.*;
import java.util.*;
public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int K = Integer.parseInt(st.nextToken());
		
		long dp[][]=  new long[K+1][N+1];
		long result = 0;
		
		for(int i=1;i<=K;i++) {
			for(int j=0;j<=N;j++) {
				if(i==2||i==1) {
					dp[i][j]=1;
				}else {
					for(int k=j;k<=N;k++) {
						dp[i][j] += dp[i-1][k]%1000000000;
					}
				}
			}
		}
		if(K==1) {
			result = 1;
		}else {
			for(int i=0;i<=N;i++) {
				result+=dp[K][i];
				result=result%1000000000;
			}
		}
		
		
		System.out.print(result);
	}

}

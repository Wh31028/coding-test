import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		
		int[] grape = new int[n+1];
		for(int i=1;i<=n;i++) {
			grape[i] = Integer.parseInt(br.readLine());
		}
		
		int dp[] = new int[n+1];
		
		dp[1] = grape[1];
		if(n>1) {
			dp[2] = grape[2]+grape[1];
		}
		for(int i=3;i<=n;i++) {
			dp[i] = Math.max(dp[i-1], Math.max(dp[i-2]+grape[i],dp[i-3]+grape[i-1]+grape[i]));
		}
		
		System.out.print(dp[n]);
	}

}

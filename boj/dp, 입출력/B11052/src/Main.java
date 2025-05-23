import java.io.*;
import java.util.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine());
		int arr[] = new int[N+1];
		int dp[] = new int[N+1];
		for(int i=1;i<=N;i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		dp[1] = arr[1];
		for(int i=2;i<=N;i++) {
			dp[i] = arr[i];
			for(int j=1;j<=i;j++) {
				dp[i] = Math.max(dp[i-j]+dp[j], dp[i]);
			}
		}
		
		System.out.print(dp[N]);
	}

}

import java.io.*;
import java.util.*;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int arr[] = new int[N];
		for(int i=0;i<N;i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		
		int dp[] = new int[N];
	
		int ans=0;
		for(int i=0;i<N;i++) {
			dp[i]=1;
			for(int j=0;j<i;j++) {
				if(arr[i]<arr[j] && dp[i]<=dp[j]) {
					dp[i]= dp[j]+1;
				}
			}
			ans = Math.max(ans, dp[i]);
		}
		System.out.print(ans);
		
	}

}

import java.io.*;
import java.util.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine());
		int arr[] = new int[N];
		int dp[] = new int[N];

		for(int i=0;i<N;i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		
		for(int i=0;i<N;i++) {
			dp[i]=1;
			for(int j=0;j<i;j++) {
				if(arr[j]<arr[i]) {
					dp[i] = Math.max(dp[i], dp[j]+1);
				}
			}
		}
		int ans =0;
		for(int i=0;i<N;i++) {
			int dp2[] = new int[N];
			int max=0;
			for(int j=i+1;j<N;j++) {
				for(int k=i;k<j;k++) {
					if(arr[k]>arr[j]) {
						dp2[j] =Math.max(dp2[j], dp2[k]+1);
					}
				}
				max = Math.max(dp2[j],max);
			}
			dp[i] = dp[i]+max;
			ans = Math.max(ans, dp[i]);
		}

		System.out.print(ans);
	}

}

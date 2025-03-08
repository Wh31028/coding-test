import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		
		int arr[] = new int[n];
		int dp[] = new int[n];
		for(int i=0;i<n;i++) {
			arr[i] = Integer.parseInt(br.readLine());
		}
		
		dp[0] = arr[0];
				
		
		for(int i=1;i<n;i++) {
			if(i==1) {
				dp[i] = arr[0]+arr[1];
			}else if(i==2) {
				dp[i] = Math.max(arr[0], arr[1])+arr[2];
			}else {
				dp[i] = Math.max(dp[i-2], dp[i-3]+arr[i-1])+arr[i];
			}

		}
		
		System.out.print(dp[n-1]);
		
		
		
		
	}

}

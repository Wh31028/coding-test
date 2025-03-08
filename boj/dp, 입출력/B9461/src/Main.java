import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int T = Integer.parseInt(br.readLine());
		
		for(int i=0;i<T;i++) {
			 int N = Integer.parseInt(br.readLine());
			 long dp[] = new long[N+1];
			 
			 for(int j=1;j<=N;j++) {
				 if(j>=1&&j<=3) {
					 dp[j] = 1;
				 }else {
					 dp[j] = dp[j-2]+dp[j-3];
				 }
			 }
			 bw.write(String.valueOf(dp[N]));
			 bw.newLine();
		}
		br.close();
		bw.flush();
		bw.close();
		
		

	}

}
